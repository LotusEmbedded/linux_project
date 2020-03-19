#!/usr/bin/python
import os
import shutil , errno
src_dir = "/home/lotus/Dropbox/linux_prog"
dst_dir = "/media/lotus/LOTUS_WORK/linux_prog"

print "=======  sysnc start ========="
print ">> source dir = ",src_dir
print ">> destinetion dir = ",dst_dir


def copyanything(src, dst):
    try:
        shutil.copytree(src, dst)
    except OSError as exc: # python >2.5
        if exc.errno == errno.ENOTDIR:
            shutil.copy(src, dst)
        else: raise


os.system("espeak 'delete presant direcroty'")
os.system("rm -R /media/lotus/LOTUS_WORK/linux_prog/");

os.system("espeak 'sync start'")
copyanything(src_dir,dst_dir)
os.system("espeak 'sync end'")
os.system("espeak 'shutdown pc imediatly'")
os.system("shutdown 0");

