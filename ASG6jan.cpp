#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int menu, makan, minum, qty;
	float harga1, harga2, hasil, total1, total2;
	// tampilan awal
	printf("   \n    Selamat datang di took pastry!\n\n");
	printf("       ====MENU MAKANAN:===\n");
			printf("1. Croissant almond     | Rp25.000 \n");
			printf("2. Smoke beef croissant | Rp27.500\n");
			printf("3. Croffle              | Rp27.000\n");
			printf("4. Apple puff           | Rp22.000\n");
			printf("5. Pie apple            | Rp25.000\n\n");
	printf("       ===MENU MINUMAN:====\n");
			printf("6. Espresso             | Rp18.000\n");
			printf("7. Caffe latte          | Rp25.000\n");
			printf("8. Cappucino            | Rp25.000\n\n");
	
	//memilih
	printf("ketik '11' jika hanya ingin makan.\n");
	printf("ketik '12' jika hanya ingin minum.\n");
	printf("ketik '13' jika ingin makan dan minum.\n\n");
	printf("input nomor: ");
	scanf("%d", &menu);

	//program
		if(menu == 11){
	printf("silahkan pilih menu makanan (1 - 5): ");
	scanf("%d", &makan);
	
	
				switch(makan)
				{
					case 1:
						harga1 = 25.000;
						printf("kamu memilih Croissant almond dengan harga Rp25.000\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total1 = harga1 * qty;
						break;
					case 2:
						harga1 = 27.500;
						printf("kamu memilih Smoke beef croissant dengan harga Rp27.500\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total1 = harga1 * qty;
						break;
					case 3:
						harga1 = 27.000;
						printf("kamu memilih Croffle dengan harga Rp27.000\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total1 = harga1 * qty;
						break;
					case 4:
						harga1 = 22.000;
						printf("kamu memilih Apple puff dengan harga Rp22.000\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total1 = harga1 * qty;
						break;
					case 5:
						harga1 = 25.000;
						printf("kamu memilih Pie apple dengan harga Rp25.000\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total1 = harga1 * qty;
						break;
					default:
						printf("\n!!!silahkan masukkan angka 1 - 5!!!");
				}
		}else if(menu == 12){
			printf("silahkan pilih menu minuman(6 - 8): ");
			scanf("%d", &minum);
				switch(minum){
					case 6:
						harga2 = 18.000;
						printf("kamu memilih Espresso dengan harga Rp18.000\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total2 = harga2 * qty;
						break;
					case 7:
						harga2 = 25.000;
						printf("kamu memilih Caffe latte dengan harga Rp25.000\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total2 = harga2 * qty;
						break;
					case 8:
						harga2 = 25.000;
						printf("kamu memilih Cappucino dengan harga Rp25.000\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total2 = harga2 * qty;
						break;
					default:
						printf("\n!!!silahkan masukkan angka 6 - 8!!!\n");		
				 }
			}else if(menu == 13){
				printf("silahkan pilih menu makanan (1 - 5): ");
				scanf("%d", &makan);
				switch(makan)
				{
					case 1:
						harga1 = 25.000;
						printf("kamu memilih Croissant almond dengan harga Rp25.000\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total1 = harga1 * qty;
						break;
					case 2:
						harga1 = 27.500;
						printf("kamu memilih Smoke beef croissant dengan harga Rp27.500\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total1 = harga1 * qty;
						break;
					case 3:
						harga1 = 27.000;
						printf("kamu memilih Croffle dengan harga Rp27.000\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total1 = harga1 * qty;
						break;
					case 4:
						harga1 = 22.000;
						printf("kamu memilih Apple puff dengan harga Rp22.000\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total1 = harga1 * qty;
						break;
					case 5:
						harga1 = 25.000;
						printf("kamu memilih Pie apple dengan harga Rp25.000\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total1 = harga1 * qty;
						break;
					default:
						printf("\n!!!silahkan masukkan angka 1-5 untuk makanan!!!\n");
				}
			printf("\nsilahkan pilih menu minuman (6 - 8): ");
			scanf("%d", &minum);
				switch(minum){
					case 6:
						harga2 = 18.000;
						printf("kamu memilih Espresso dengan harga Rp18.000\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total2 = harga2 * qty;
						break;
					case 7:
						harga2 = 25.000;
						printf("kamu memilih Caffe latte dengan harga Rp25.000\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total2 = harga2 * qty;
						break;
					case 8:
						harga2 = 25.000;
						printf("kamu memilih Cappucino dengan harga Rp25.000\n");
						printf("jumlah pesanan: "); scanf("%d", &qty);
					 	total2 = harga2 * qty;
						break;
					default:
						printf("\n!!!silahkan masukkan angka 6 - 8 untuk minuman!!!\n");		
				 }
	}

		hasil = total1 + total2;
		printf("\n\nTotal pembayaran = Rp%.3f", hasil);
	return 0;
}
