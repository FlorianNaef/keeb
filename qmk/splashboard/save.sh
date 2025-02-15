#! /bin/bash

destDir=~/Documents/IT/keeb/qmk

cp -rf ../splashboard $destDir

git -C $destDir add .

read -p "Enter commit message: " commitmessage
git -C $destDir commit -m "$commitmessage"

git -C $destDir push
