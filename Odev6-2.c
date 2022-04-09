#include <stdio.h>
#include <conio.h>
void cati(int cati_yukseklik);
void kat(int cati_yukseklik, int kat_yukseklik);
int main()
{
	int cati_yukseklik, kat_sayisi, kat_yukseklik;
	int i;
	
	printf("Evinizin catisi ne kadar yuksek olsun:");
	scanf("%d",&cati_yukseklik);
	printf("Eviniz kac katli olsun istersiniz:");
	scanf("%d",&kat_sayisi);
	printf("Her bir kat ne kadar yuksek olsun istersiniz:");
	scanf("%d",&kat_yukseklik);
	cati(cati_yukseklik);
	for(i=1; i<=kat_sayisi; i++)
	{
		kat(cati_yukseklik, kat_yukseklik);
	}
	printf("Gule gule oturun.");
	getch();
	return 0;
}
void cati(int cati_yukseklik){
	int x,y;
	for(y=1;y<=1;y++){
		for(x=1;x<=cati_yukseklik;x++){
			int xyz=1;
			while(xyz<=(2*x)-1){printf("* ");
			xyz=xyz+1;
			}
			printf("\n");
		}
	}
}


void kat(int cati_yukseklik, int kat_yukseklik){
	int xx,yy;
	for(yy=1;yy<=kat_yukseklik;yy++){
		for(xx=1;xx<=(2*cati_yukseklik)-3;xx++){
			if(yy==1 || xx==1 || xx==(2*cati_yukseklik)-3 || yy==kat_yukseklik)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
	}
