#!/bin/bash
#file=$1
word=$1


for file in ./dicts/*
do
	./main.x "$file" $word
done
