#include<stdio.h>
#include"disco local (C:)/UPY/intro_prog_emb/Unit2_/utils.h"

int main(){
ROBOT markovito;
markovito.name = "markovito";
markovito.type = "ServiceRobot";
markovito.height = 1.2;
markovito.weight = 2.5;
markovito.degressoffreedom = 3;

markovito.SayHelloToRobot = SayHelloToRobot;

ROBOT tiago;
tiago.name = "tiago";
tiago.type = "ServiceRobot";
tiago.height = 1.7;
tiago.weight = 2.8;
tiago.degressoffreedom = 7;

tiago.SayHelloToRobot = SayHelloToRobot;

markovito.SayHelloToRobot(tiago);

}
