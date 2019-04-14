#!/bin/sh

cd $(dirname $0);

#会在终端显示当前路径
pwd -P

pod spec lint FSPassword.podspec --allow-warnings --use-libraries
pod trunk push FSPassword.podspec --allow-warnings --use-libraries

open .

# mkdir shell_tut
#   for ((i=0; i<10; i++)); do
#   touch test_$i.txt
#   done
