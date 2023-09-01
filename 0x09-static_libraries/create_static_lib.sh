#!/bin/bash

LIBRARY_NAME="liball.a"


SOURCE_FILES=$(find . -maxdepth 1 -type f -name "*.c")

if [ -z "$SOURCE_FILES" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi


for SOURCE_FILE in $SOURCE_FILES; do

  FILENAME=$(basename -- "$SOURCE_FILE")
  FILENAME_NOEXT="${FILENAME%.*}"


  gcc -c "$SOURCE_FILE" -o "${FILENAME_NOEXT}.o"

  if [ $? -ne 0 ]; then
    echo "Compilation of $SOURCE_FILE failed."
    exit 1
  fi
done


ar rcs "$LIBRARY_NAME" *.o

rm -f *.o

echo "Static library $LIBRARY_NAME created successfully."

