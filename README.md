2048-multiplayer
================

added server-client gaming as well as a opengl view for 2048,original project https://github.com/mevdschee/2048.c

firstly, create the executable linux file on the systems you want to play, with the following command

> g++ -o 2048.out 2048multiplayer.cpp -lglut -lGLU -lGL 

then, on one of them, 

> 2048.out server

with this (assuming 2048.out is the executable ) , this system will become your 2048 server

(also you should know the IP of this system, which you can get using ifconfig)

on clients,

> 2048.out client

then it will ask you to enter the username, and IP address of server.(which you got from ifconfig)

If you want to play in the opengl window, then

> 2048.out opengl


That's all. (it's pretty elementary now, first time used sockets ,opengl and some things are not working properly, more like a POC now)



