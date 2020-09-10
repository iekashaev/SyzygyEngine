import os
import sys
import shutil
import argparse

parser = argparse.ArgumentParser(description='Build syzygy project:')

parser.add_argument('-b', '--build', help='Recompiles the project', action="store_true")

args = parser.parse_args()

if args.build:
    print('Started build Syzygy project:')
    try: 
        shutil.rmtree('./build')
        os.system('mkdir ./build;\
                    cd ./build;\
                    cmake ..;\
                    make;')
    except FileNotFoundError:
        os.system('mkdir ./build;\
                cd ./build;\
                cmake ..;\
                make;')
    print('The syzygy project is built')