#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("********************************************\n"
           "*                  Cardápio                *\n"
           "* Item                            Preço    *\n"
           "* 1.Batata Frita                  R$ 8,00  *\n"
           "* 2.Coca Cola                     R$ 5,00  *\n"
           "* 3.Pizza de Calabresa            R$ 30,00 *\n"
           "* 4.Cachorro Quente               R$ 5,00  *\n"
           "* 5.Suco                          R$ 5,50  *\n"
           "* 6.Crepe de Frango               R$ 7,00  *\n"
           "* 7.X-Burguer                     R$ 7,00  *\n"
           "* 8.Tapioca                       R$ 5,00  *\n"
           "* 9.Marmita                       R$ 10,00 *\n"
           "* 10.Açaí                         R$ 5,00  *\n"
           "********************************************\n"
           "Digite os números dos itens que deseja e a  \n"
           "quantidade da seguinte forma: 01#02# Para ter-\n"
           "minar digite: *");

           char pedido[500];
           FILE *fp;

           fp = fopen("comanda01.txt","w");
            if(!fp)
            {
            printf( "Erro na abertura do arquivo");
            exit(0); }

           scanf("%s", pedido);
           int n=0;
           int i = strlen(pedido);
         //  printf(pedido);
           char item[i];
           char quantidade[i];
           // item[n] = pedido[n];

            int marca[20];
            int j = 0;

            do
           {

          if(pedido[n] == '*'){


            j = n;

          }
            
           n++;
           } while(n < 90);

           int fim = (j+1)/6;
           int qt = fim*2 -1;

           int a = 0;
           int b =0;

            for(a = 0; a <= qt; a++)
            {
                item[a*2] = pedido[a*6];
                item[a*2+1] = pedido[a*6 +1];
                quantidade[a*2] = pedido[3*(a*2+1)];
                quantidade[a*2+1] = pedido[3*(a*2+1)+1];
            
            }

            int c = strlen(item);
        

            int itemnum[fim];
            int quantit[fim];
            float precotot =0;

            for(b=0; b<= fim-1; b++)
            {
             itemnum[b] = (item[b*2] -48)*10 + item[b*2 + 1] - 48;
             quantit[b] = (quantidade[b*2] -48)*10 + quantidade[b*2 + 1] - 48;
           

             if  (itemnum[b] == 1)
             {
             char string[20] = "Batata Frita\n";
             int i =0;
             printf(string);
              float preco = quantit[b]*8;
             printf("%f\n", preco);
             for(i=0; string[i]; i++) putc(string[i], fp);
                precotot = precotot + preco;
             }
             else if (itemnum[b]==2)
             {
                char string[20] = "Coca Cola\n";
                printf(string);
                float preco = quantit[b]*5;
              printf("%f\n", preco);
              for(i=0; string[i]; i++) putc(string[i], fp);
                precotot = precotot + preco;
             }
             else if(itemnum[b]==3)
             {
                char string[20] = "Pizza de Calabresa\n";
                printf(string);
                float preco = quantit[b]*30;
                printf("%f\n", preco);
                for(i=0; string[i]; i++) putc(string[i], fp);
                precotot = precotot + preco;
             }
             else if(itemnum[b]==4)
             {
                char string[20] = "Cachorro Quente\n";
                printf(string);
                float preco = quantit[b]*5;
              printf("%f\n", preco);
              for(i=0; string[i]; i++) putc(string[i], fp);
              precotot = precotot + preco;
             }
             else if(itemnum[b]==5)
             {
                char string[20] = "Suco\n";
                printf(string);
                float preco = quantit[b]*5.5;
              printf("%f\n", preco);
                for(i=0; string[i]; i++) putc(string[i], fp);
                precotot = precotot + preco;
             }
             else if(itemnum[b]==6)
             {
                char string[20] = "Crepe de Frango\n";
                printf(string);
                float preco = quantit[b]*7;
              printf("%f\n", preco);
              for(i=0; string[i]; i++) putc(string[i], fp);
              precotot = precotot + preco;
             }
             else if(itemnum[b]==7)
             {
                char string[20] = "X-Burguer\n";
                printf(string);
                float preco = quantit[b]*7;
              printf("%f\n", preco);
              for(i=0; string[i]; i++) putc(string[i], fp);
              precotot = precotot + preco;
             }
             else if(itemnum[b]==8)
             {
                char string[20] = "Tapioca\n";
                printf(string);
                float preco = quantit[b]*5;
              printf("%f\n", preco);
              for(i=0; string[i]; i++) putc(string[i], fp);
              precotot = precotot + preco;
             }
             else if(itemnum[b]==9)
             {
                char string[20] = "Marmita\n";
                printf(string);
                float preco = quantit[b]*10;
              printf("%f\n", preco);
              for(i=0; string[i]; i++) putc(string[i], fp);
              precotot = precotot + preco;
             }
             else if(itemnum[b]==10)
             {
                char string[20] = "Açai\n";
                printf(string);
                float preco = quantit[b]*5;
              printf("%f\n", preco);
              for(i=0; string[i]; i++) putc(string[i], fp);
              precotot = precotot + preco;
             }
            }

         
            printf("Total = %f", precotot);
     


    return 0;
}
