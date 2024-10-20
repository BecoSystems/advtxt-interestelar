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



