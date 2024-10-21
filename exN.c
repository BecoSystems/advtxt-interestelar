/*****************************************************************************
 *   exN.c                                    Version 20180714.101818        *
 *                                                                           *
 *   Brief description                                                       *
 *   Copyright (C) 2016-2018    by Ruben Carlo Benante                       *
 *****************************************************************************
 *   This program is free software; you can redistribute it and/or modify    *
 *   it under the terms of the GNU General Public License as published by    *
 *   the Free Software Foundation; either version 2 of the License.          *
 *                                                                           *
 *   This program is distributed in the hope that it will be useful,         *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 *   GNU General Public License for more details.                            *
 *                                                                           *
 *   You should have received a copy of the GNU General Public License       *
 *   along with this program; if not, write to the                           *
 *   Free Software Foundation, Inc.,                                         *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.               *
 *****************************************************************************
 *   To contact the author, please write to:                                 *
 *   Ruben Carlo Benante                                                     *
 *   Email: rcb@beco.cc                                                      *
 *   Webpage: www.beco.cc                                                    *
 *   Phone: +55 (81) 3184-7555                                               *
 *****************************************************************************/

#include <stdio.h>
#include <stlib.h>

void introdução () {
    printf("Voce esta em uma caverna escura.À sua frente,há uma porta misteriosa.\n");
    printf("Para continuar,voce precisa fazer duas escolhas:primeiro,um objeto para te ajudar:\n");
    printf("Depois,uma ação que voce deve realizar.Se voce escolher errado voce morrera.\n");
    printf("Escolha com sabedoria!\n");
}

int primeira_escolha(){
    int escolha;

    printf("\n Escolha um objeto para te ajudar:\n");
    printf("1.Tocha\n");
    printf("2.Espada\n");
    printf("3.Garrafa de Agua");
    printf("Digite o numero do objeto escolhido");
    scanf("%d",&escolha);

switch (escolha) {
cases1:
    printf("\n voce escolheu a tocha azul.Ela revela armadilhas do chão\n");
    return 1
       case 2
       printf("\n voce escolheu a Espada,ofensivamente muito boa mas não revela os perigos ocultos");
    return 2
        case 3
        printf("\nvoce escolheu a garrfa de agua que intuitivamente mata a sua sede e nada mais");
    return primeira_escolha();
}
 void segunda_escolha (int objeto){
     int escolha;
     printf("\n Agora,escolha uma ação pra continuar:\n");
     printf("\n 1.Abrir a porta");
     printf("\n 2.Examinar o chão");
     printf("\n 3.Arremessar a garrafa na parede")
         printf("Escolha o numero da opção escolhida")
         scanf("%d",&escolhas);

     if(objeto==1&&escolha==2){
         printf("\nParabens!Voce usou a tocha pra examinar o chão e descobriu a armadilha");
     }
     else{
         introdução();
             int objeto=primeira_escolha;
             int objeto=primeira escolha();
             segunda_escolha(objeto);
             return 0

}

