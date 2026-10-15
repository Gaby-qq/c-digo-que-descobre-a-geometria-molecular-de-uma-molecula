#include <iostream>
using namespace std;
//o progrma tem como objetivo dizer qual eh a geometria molecular de uma molecula

/*a seguir a funcao vai conferir qual a geometria pelos pares estereoativos ,pares ligantes
e pares isolados.Verificando se os numeros condizem coma alguma geometria presente no código */

char geometriadamolecula (int pares_estereoativos,int ligantes,int isolados)
{
    if (pares_estereoativos == 1 && ligantes == 1 && isolados == 0){
    cout<<"a molecula tem 1 par estereoativo,um ligante e 0 pares isolados "<<endl;
    cout<<"entao a molecula tem geometria molecular Linear"<<endl;}

    else if (pares_estereoativos== 2 && ligantes == 2 && isolados == 0){
    cout<<"a molecula tem 2 pares estereoativos,dois ligantes e 0 pares isolados "<<endl;
    cout<<"entao a molecula tem geometria molecular Linear"<<endl;}

    else if (pares_estereoativos== 3 && ligantes == 3 && isolados == 0 ){
    cout<<"a molecula tem 3 pares estereoativos,3 ligantes e 0 pares isolados"<<endl;
    cout<<"entao a molecula tem a geometria molecular trigonal plana"<<endl;}
  
    else if (pares_estereoativos== 3 && ligantes == 2 && isolados == 1){
    cout<<"a molecula tem 3 pares estereoativos,2 ligantes e 1 par isolado"<<endl;
    cout<<"entao a molecula tem geometria molecular angular"<<endl;}
    
    else if (pares_estereoativos == 4 && ligantes == 4 && isolados ==0){
    cout<<"a molecula tem 4 estereoativos,4 ligantes e 0 pares isolados"<<endl;
    cout<<"entao a molecula tem geometria molecular tetraedrica e espacial"<<endl;}

    else if (pares_estereoativos == 4 && ligantes ==3 && isolados == 1 ){
    cout<<"a molecula tem 4 estereoativos,3 ligantes e par isolado"<<endl;
    cout<<"entao a molecula tem geometria molecular piramidal e espacial "<<endl;}
  
    else if (pares_estereoativos == 4 && ligantes ==2 && isolados == 2) {
    cout<<"a molecula tem 4 pares estereoativos, 2 ligantes e 2 pares isolados"<<endl;
    cout<<"entao a molecula tem a geometria tetraedrica angular e nao eh espacial"<< endl;}
       
    else
    cout<<"geografia molecular errada,não existente ou sem conhecimento(nçao incluida no código) "<<endl;

    return 0;

}

int main( ){
    int pares_estereoativos , pares_ligantes , pares_isolados;
    int escolha_usuario;
 
    escolha_usuario = 0;
    while(escolha_usuario != 1){
    cout<<"//==================================================//"<<endl;
    cout<<"--MENU PRINCIPAL--"<<endl;
    cout<<" [1]começar o programa"<<endl;
    cout<<" [2]ler conceitos sobre geometria molecular"<<endl;
    cout<<" [números negativos]Terminar programa"<<endl;
    cout<<" Digite o número de sua escolha"<<endl;
    cout<<"//=================================================//"<<endl;
    cin>> escolha_usuario ;

    if (escolha_usuario == 2){
        cout<<"PARES ESTEREOATIVOS = são os elétrons na camada de valência ao redor de um átomo central,se dividem em:"<< endl;
        cout<<"obs: os pares estereoativos contam apenas para a direção/ligações duplas ou triplas contam como apenas um par estereoativos"<<endl;
        cout<<"PARES LIGANTES = são os elétrons que formam ligações"<<endl;
        cout<<"PARES NÃO-LIGANTES/ISOLADOS = elétrons que não participam de nenhuma de ligação e tem uma grande repulsão aos outros elétrons"<<endl;
    }

    if (escolha_usuario == 1){
        while (escolha_usuario ==1)
    {
    cout<<"escreva os pares estereoativos que a molecula apresenta:"<<endl;
    cin>>pares_estereoativos;
    cout<<"escreva os pares ligantes:"<<endl;
    cin>>pares_ligantes;
    cout<<"escreva os pares isolados:"<<endl;
    cin>>pares_isolados;
    
    cout<<"conclusao:"<<geometriadamolecula(pares_estereoativos,pares_ligantes,pares_isolados) <<endl;
    cout<<"gostaria de continuar o programa?(escolha números negativos para sair do programa/escolha 1 para continuar/ escolha qualquer para voltar ao Menu)"<<endl;
    cout<<"digite 2 para ler os conceitos da geometria molecular"<<endl;
    cin>> escolha_usuario;
    
   }
  }
  if (escolha_usuario < 0){
    break;
  }
}
}