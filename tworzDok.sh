#!/bin/sh

doxygen komentacja

cd latex

make

cp refman.pdf ../dokumentacja.pdf

cd ..

xdg-open dokumentacja.pdf