<h1> Born2beRoot </h1>
<a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/clddgcluu00260fjrdeblcpv1/project/2951021" alt="thbui's 42 Born2beroot Score" /></a>

Setting up a virtual operating system in VirtualBox

This project is not graded by Moulinette, only by your Peers

<h3>Sources I've used to finish this project:</h3>

  - <a href="https://github.com/pasqualerossi/Born2BeRoot-Guide">pasqualerossi guide</a> | Does not contain the bonus, but has pictures to guide you to set up the VM for the mandatory part
  - <a href="https://github.com/hanshazairi/42-born2beroot#bonus">hanshazairi guide</a> | Contains bonus, but does not show how to Install the operating system
  - <a href="https://baigal.medium.com/born2beroot-e6e26dfb50ac">guide article</a> | Similar to the parsqualerossi guide, downloads more unnecessary things, but wget is useful
  - <a href="https://github.com/HEADLIGHTER/Born2BeRoot-42/blob/main/monitoring.sh">script for monitoring.sh</a> | The script can be downloaded with the wget command, so that you don't have to write it yourself
  - <a href="https://docs.google.com/document/d/1-BwCO0udUP7MhRh81Y681zz0BalXtKFtte_FHJc6G4s/edit">evaluation questions</a> | Doc document with questions for the evaluation
<hr>
  
Do not forget to download the operating system in **/sgoinfre/goinfre/Perso/<your_login_name>**, otherwise you might have to do it again, because u don't have enough space on your account and it won't let you log in without emptying some space.

After clicking on NEW, you can choose the name of the project, the OS type and the Machine Folder:
<p align="center"><img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216784821-7f736948-4b32-42e8-ae56-19e69e92db7d.png"></p>
You can click many types on the go back arrow ◀︎ until you get to the root folder and from there go to /sgoinfre/goinfre/Perso/<your_login_name>
<p align="center"><img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216784427-ed801081-6299-4e96-af13-c13eaa5514f1.png"></p>
Everything is then left on Default.

After that you can go to the Settings to choose the disk file with the OS (for me it was the Debian)
Click on the blue circle next to the Optical Drive on the far right, there you can choose the folder and the disk you have installed on the web.
<p align="center"><img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216785058-bb6b56da-e248-47ce-941d-3630e0107408.png"></p>
After that you should install it as shown in the <a href="https://github.com/pasqualerossi/Born2BeRoot-Guide">pasqualerossi guide</a>.

If you're gonna do the bonus, when you get to this part, you have to add partitions srv and var-log and mount points /srv and /var/log like in the bonus:

Here you have to use less volume group than u have so you can give some to srv and var-log
<p align="center">
  <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216789872-29fd0aac-bad7-41b5-a6ab-1ca3ae23d5d0.png">
  <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216789904-a717f52c-e03d-4618-ba73-9c2894363462.png">
  <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791674-65dab68f-b3d6-4ef3-b93d-58f951a04679.png">
  <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216790035-f7001a1d-6a5d-438e-b5ac-9116c4337857.png">
  <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216790072-d244cacf-de7a-4b38-ad25-6b01ee0e795b.png">
 </p>
 
 <p align="center">Allocate some size to this logical volume, less than what you still have available</p>
 <p align="center"><img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216790120-64e4aa3f-f0f7-4f3d-8ede-8ce7407f6aba.png"></p>

<p align="center">Do the same thing with var-log</p>

<p align="center">
  <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791682-3d199f1a-f18e-48fd-8639-0245a4b575a7.png">
  <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216790259-644aab58-1f76-4b05-8004-94dadf533d91.png">
</p>
<p align="center">You can leave the size as it is</p>
<p align="center"><img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216790843-dc493593-c55f-40b0-91fb-31c3186c742d.png"></p>

<p align="center"><img width="797" alt="image" src="https://user-images.githubusercontent.com/118228827/216791751-0f185b82-d0b9-4cc6-a341-995fe8e47a93.png"></p>

<p align="center">Set the mount points of srv and var-log</p>
<p align="center">
 <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791122-12d65b6a-7aa0-4ba6-805b-956ba811c8c1.png">
 <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791150-37fe73cb-861c-4a62-938c-8bc9b42bdd8a.png">
 <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791162-f6436bc0-8968-4541-8f32-323b07ec8837.png">
 <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791168-34b1ed3d-8f7c-4590-8824-488f83969eb5.png">
 <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791175-e10f3da4-e11b-460a-bc6d-edf772eaf616.png">
 <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791193-e972c35c-bd4b-40bb-95f0-ba64e125c0de.png">
 <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791202-f43e81f7-1dc4-4001-8f15-f6af23baba86.png">
 <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791219-3a969b1a-555a-4a6d-ab65-e46c9c543a49.png">
 <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791223-e88c783d-c34e-4eac-9868-45c49e75799d.png">
 <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791231-6f474afe-100c-47b2-93df-81ace6ec179c.png">
 <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791240-609cef94-ff7b-4983-bf3e-e25dbeb6f39d.png">
 <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791248-bba2b5cd-5b37-450b-8546-8f90ec34881e.png">
 <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791252-4cea01d5-262c-4638-ae6e-9237023d639f.png">
 <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791265-ca9db994-1da2-4a72-ad4f-9031a4ae2a4b.png">
 <img width="800" alt="image" src="https://user-images.githubusercontent.com/118228827/216791270-242a7d2f-d4c1-43e1-81c9-7cd5e1b27025.png">
</p>


After this you can continue with the <a href="https://github.com/pasqualerossi/Born2BeRoot-Guide">pasqualerossi's guide</a>, and try to do the bonuses with
<a href="https://github.com/hanshazairi/42-born2beroot#bonus">hanshazairi's guide</a>
<hr>

To not have to write your own script to the monitoring.sh, you can <a href="https://github.com/HEADLIGHTER/Born2BeRoot-42/blob/main/monitoring.sh">download</a> it to your folder via wget
<br>(after installing it with ``apt-get install wget``)
  - you can use the command ```wget https://raw.githubusercontent.com/HEADLIGHTER/Born2BeRoot-42/main/monitoring.sh```

Don't forget to make copies of your project for the evaluation as the key changes everytime you run it. To get the key to push it to the school repository use `sha1sum <name_of_the_file>.vdi`

