#include<stdio.h>
#include<stdlib.h>
typedef struct stagaire Stg;
typedef struct Date dt;
struct Date{
	int jrs;
	int mois;
	int annee;
};
struct Stagaire{
	char cin[10];
	char prenom[50];
	char nom[50];
	Date dn;
}stg;
int main(){
	int n;
	printf("entrer le nombre des stagaires :");
	scanf("%d",&n);
	Stagaire st[n];
	for(int i=0;i<n;i++){
		printf("entrer les informations des stagaire %d:\n",i+1);
		printf("Cin :\n");
		scanf("%s",st[i].cin);
		printf("Prenom :\n");
		scanf("%s",st[i].prenom);
		printf("Nom:\n");
		scanf("%s",st[i].nom);
		printf("entrer date naissance:\n");
		printf("Jour\n");
		scanf("%dn",&st[i].dn.jrs);
		printf("Mois \n");
		scanf("%dn",&st[i].dn.mois);
		printf("Annee\n");
		scanf("%dn",&st[i].dn.annee);
	}
	
	system("cls");
	printf("Affichage des information des stagaires:\n");
	for(int i=0;i<n;i++){
		printf("\n Stagaire numero:%d",i+1);
		printf("\n CIN :%s",st[i].cin);
		printf("\n Nom et Prenom:%s %s",st[i].nom,st[i].prenom);
		printf("\n Date naissance: %d/%d/%d",st[i].dn.jrs,st[i].dn.mois,st[i].dn.annee);
	}
	//printf("stagaire %s %s  de cin %s né a %d/%d/%d",st.nom,st.prenom,st.cin,st.dn.jrs,st.dn.mois,st.dn.annee);
	return 0;
}
