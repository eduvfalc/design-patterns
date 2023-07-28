#!/usr/bin/env bash

show_help() {
  echo "Usage: build.sh [options]

Options:     
  -h,      Show this help message and exit
  -p,      Design pattern, as specified by the folder name (e.g. abstract-factory)"
}

# available design patterns
AVAILABLE_PATTERNS=("abstract-factory" "adapter")

# checking if user input is --help
if [ $1 == "--help" ] || [ $1 == "-h" ] ; then
  show_help
  exit 0
fi

# parsing command line argument
while getopts "p:" opt; do
  case $opt in
    p) option_p="$OPTARG" ;;
    \?) echo "Error: invalid option $OPTARG"
        show_help
        exit 1
        ;;
  esac
done

# checking if the argument is not empty
if [[ -z "$option_p" ]]; then
  echo "Error: option -p is missing its argument" >&2
  exit 1
fi

# verify if option is a valid option
PATTERN_FOUND=0
for pattern in "${AVAILABLE_PATTERNS[@]}"; do
    if [ "$pattern" = "$option_p" ] ; then
        PATTERN_FOUND=1
        DESIGN_PATTERN=$option_p
        break
    fi
done

if [[ $PATTERN_FOUND == 0 ]] ; then
    echo "Design pattern is either unknown or unavailable"
    exit 1
fi

# create /build directory
BUILD_DIR=$(dirname "$(realpath $0)")/build
if [ -d "$BUILD_DIR" ]; then rm -rf $BUILD_DIR; fi
mkdir -p $BUILD_DIR

# navigate to the respective design pattern folder and build
cd "$DESIGN_PATTERN"
SOURCE_DIR=$(pwd)
cmake -S ${SOURCE_DIR} -B ${BUILD_DIR}
cmake --build ${BUILD_DIR}