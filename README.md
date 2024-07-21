# Bachelor-Project-collaborative-MR-AR-with-PUN-and-ASA

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


