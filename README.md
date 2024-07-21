# Bachelor-Project-collaborative-MR-AR-with-PUN-and-ASA

Great, now that we have a sample of the data, we can proceed with building the model. Let's break it down step by step.

### Steps to Build the Model

1. **Load the Data**:
   Since we can't directly read from the image, I'll assume the data is loaded into a DataFrame named `df_train`.

2. **Data Preprocessing**:
    - Handle missing values.
    - Normalize/standardize features if necessary.
    - Split data into features and target variable.

3. **Model Training**:
    - Use a model suitable for binary classification.
    - Validate the model to avoid overfitting.

4. **Model Evaluation on Test Set**:
    - Once you receive the test set, apply the same preprocessing steps and evaluate the model.

Here's the Python code to implement these steps:

### Step 1: Load the Data

Assuming the data is already loaded into `df_train`.

### Step 2: Data Preprocessing

```python
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.impute import SimpleImputer
from sklearn.preprocessing import StandardScaler

# Load the data (mock code as we cannot directly read from the image)
df_train = pd.read_csv('/mnt/data/QSI_training_dataset.csv')

# Separate features and target
X = df_train.drop('DEFAULT', axis=1)
y = df_train['DEFAULT']

# Handle missing values
imputer = SimpleImputer(strategy='mean')
X_imputed = imputer.fit_transform(X)

# Standardize features
scaler = StandardScaler()
X_scaled = scaler.fit_transform(X_imputed)

# Split data into training and validation sets to avoid overfitting
X_train, X_val, y_train, y_val = train_test_split(X_scaled, y, test_size=0.2, random_state=42)
```

### Step 3: Model Training

```python
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import roc_auc_score

# Initialize the model
model = RandomForestClassifier(random_state=42, n_estimators=100)

# Train the model
model.fit(X_train, y_train)

# Validate the model
y_val_pred = model.predict_proba(X_val)[:, 1]
val_auc = roc_auc_score(y_val, y_val_pred)
print(f'Validation AUROC: {val_auc:.4f}')
```

### Step 4: Model Evaluation on Test Set

Once you receive the test set, use the following steps:

```python
# Load the test data
df_test = pd.read_csv('/path/to/QSI_IRB_Introduction_TestSample.csv')

# Preprocess the test data
X_test = df_test.drop('DEFAULT', axis=1)  # Assuming the test set includes the 'DEFAULT' column
y_test = df_test['DEFAULT']

X_test_imputed = imputer.transform(X_test)
X_test_scaled = scaler.transform(X_test_imputed)

# Predict and evaluate on the test set
y_test_pred = model.predict_proba(X_test_scaled)[:, 1]
test_auc = roc_auc_score(y_test, y_test_pred)
print(f'Test AUROC: {test_auc:.4f}')
```

### Summary

1. **Load the training data** and preprocess it (handle missing values, standardize features).
2. **Split** the data into training and validation sets to prevent overfitting.
3. **Train** a model using a classifier suitable for binary classification.
4. **Evaluate** the model using the validation set and calculate the AUROC.
5. **Preprocess the test data** in the same way as the training data when you receive it.
6. **Evaluate** the model on the test set and report the AUROC.

If you need any more help or have any questions, feel free to ask!

This work explores the concepts of multi-user capabilities in Microsoft Hololens devices to fill a significant gap in the literature by addressing and empirically measuring the limitations and feasibility of a collaborative solution in MR, with additional considerations for LVR. A comprehensive analysis of technical solutions for implementing collaborative features was conducted, identifying Microsoft Shared Experiences as the most suitable solution. A proof-of-concept implementation utilizing the PUN server for graphics synchronization and an Azure Spatial Anchor for a common coordinate system was developed. An experimental design and evaluation was carried out to asses the limitations and feasibility of the implementation. In this context, we have focused on the position of a virtual object shared between two users, and compared the robustness of its position. Results showed accurate recognition of the object's position while highlighting challenges related to the shared coordinate system and displaying correct depths. This study shows promising potential for collaborative application in MR.

The code for the final implementation and Bachelor report can be found on this repository.

# Videos: 

Implementation: https://www.youtube.com/watch?v=YWDDEXeGmyg

Evaluation: https://www.youtube.com/watch?v=55lS9Eusrwg&t=125s

# Tutorials used: 

This implementation uses different components from the tutorial series from Microsoft MRTK: 

### Tutorial for the main setup (PUN): https://learn.microsoft.com/en-us/windows/mixed-reality/develop/unity/tutorials/mr-learning-sharing-01

### Tutorial for implementing the Table Anchor (as the version in the multi-user capabilites didn't work): https://learn.microsoft.com/en-us/training/modules/azure-spatial-anchors-tutorials/

Note in this tutorial : 

For step 20: Click the No Function drop-down and then select AnchorModuleScript > FindAzureAnchor (GameObject).
-	There was only FindAzureAnchor (string) – so I added this

And for step 24: Click the No Function drop-down and then select AnchorModuleScript > DeleteAzureAnchor (GameObject).
-	I added DeleteAzureAnchor ()

And not correct in tutorial :
![image](https://github.com/mikkeline-elleby/Bachelor-Project-collaborative-MR-AR-with-PUN-and-ASA/assets/83402800/96bae0c9-dd77-41c2-8a9e-cef14cc7ba77)


### Links for some issue fixes: 
Issues with anchormodulescript: https://stackoverflow.com/questions/71942925/mrtk-photon-unity-networking-anchormodulescript-namespace-not-found 

To add occlusion : https://learn.microsoft.com/en-us/training/modules/azure-spatial-anchors-tutorials/3-exercise-get-started-with-azure-spatial-anchors 

Did some changes to the tutorial code according to this : https://github.com/Azure/azure-spatial-anchors-samples/issues/358 

Some buttons are not ready to use : https://learn.microsoft.com/en-us/answers/questions/850617/(unity-hololens2)-spatial-anchor-id-could-not-be-i 

### Careful: 
This version is not ready to use, it does not include the setup for the PUN application and the identifiers for the ASA. These components needs to be entered in unity as explained in the MRTK tutorials. 


# Version:

### Unity Editor
Version 2020.3.42f1

### Azure Spatial Anchors SDK Core
Version 2.13.3

com.microsoft.azure.spatial-anchors-sdk.core

### Azure Spatial Anchors SDK for Windows
Version 2.13.3

com.microsoft.azure.spatial-anchors-sdk.windows

### Mixed Reality OpenXR Plugin
Version 1.8.0

com.microsoft.mixedreality.openxr

### Mixed Reality Toolkit Foundation
Version 2.8.3

com.microsoft.mixedreality.toolkit.foundation

### Mixed Reality Toolkit Standard Assets
Version 2.8.3

com.microsoft.mixedreality.toolkit.standardassets

### ARCore XR Plugin
Version 4.1.7 - April 08, 2021

com.unity.xr.arcore

### ARKit XR Plugin
Version 4.1.7 - April 08, 2021

com.unity.xr.arkit

### JetBrains Rider Editor
Version 3.0.16 - October 12, 2022

com.unity.ide.rider

### OpenXR Plugin
Version 1.7.0 - March 07, 2023

com.unity.xr.openxr

### Test Framework
Version 1.1.33 - July 19, 2022

com.unity.test-framework

### TextMeshPro
Version 3.0.6 - April 22, 2021

com.unity.textmeshpro

### Timeline
Version 1.4.8 - May 04, 2021

com.unity.timeline

### Unity UI
Version 1.0.0 - November 08, 2022

com.unity.ugui

### Version Control
Version 1.17.6 - October 10, 2022

com.unity.collab-proxy

### Visual Studio Code Editor
Version 1.2.5 - February 09, 2022

com.unity.ide.vscode

### Visual Studio Editor
Version 2.0.16 - June 21, 2022

com.unity.ide.visualstudio

# Good websites or repositories with similar goal :

https://mtaulty.com/2019/07/18/simple-shared-holograms-with-photon-networking-part-1/

https://github.com/MisterYeti/MRTK_MultiExperienceAnchors

https://github.com/jdcast/ar-final-project


