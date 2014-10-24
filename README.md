2048-multiplayer
================

adding server-client gaming for 2048,original project https://github.com/mevdschee/2048.c

firstly, create the executable linux file on the systems you want to play.

then, on one of them, 

> 2048.out server

with this (assuming 2048.out is the executable ) , this system will become your 2048 server

(also you should know the IP of this system, which you can get using ifconfig)

on clients,

> 2048.out client

then it will ask you to enter the username, and IP address of server.(which you got from ifconfig)

That's all. (it's pretty elementary now, first time used sockets and some things are not working properly, more like a POC now)

