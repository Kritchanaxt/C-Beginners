// ระบบจัดการสินค้าในร้านค้า: เขียนโปรแกรมที่อ่านและเขียนข้อมูลสินค้าลงในไฟล์ โดยใช้ struct ในการเก็บข้อมูลของสินค้า และใช้ pointer เพื่อเข้าถึงข้อมูลในไฟล์ เช่นการเพิ่มสินค้าใหม่ ลบสินค้า เเก้ไขข้อมูล และแสดงรายการสินค้าทั้งหมด

#include <stdio.h>

#define MAX_LABEL 10
#define MAX_NAME 100
#define MAX_PRODUCT_TYPE 20
#define MAX_PRODUCE_BY 50

struct ManagementSystem {
    char label[MAX_LABEL];
    char name[MAX_NAME];
    char productType[MAX_PRODUCT_TYPE];
    char produceBy[MAX_PRODUCE_BY];
    float price;
};

void InputProducts(struct ManagementSystem *system){
    printf("ENTER LABEL: ");
    scanf("%s", system->label);
    printf("\n");
    printf("---------------------------------------------\n");
    printf("\n");
    printf("ENTER NAME: ");
    scanf("%s", system->name);
    printf("\n");
    printf("---------------------------------------------\n");
    printf("\n");
    printf("ENTER PRODUCT TYPE: ");
    scanf("%s", system->productType);
    printf("\n");
    printf("---------------------------------------------\n");
    printf("\n");
    printf("ENTER PRODUCE BY: ");
    scanf("%s", system->produceBy);
    printf("\n");
    printf("---------------------------------------------\n");
    printf("\n");
    printf("ENTER PRICE: ");
    scanf("%f", &system->price);
    printf("\n");
}

void ProductsDetail(struct ManagementSystem *system){
    printf("---------------------------------------------\n");
    printf("\n");
    printf(" ----------------------\n");
    printf("|   PRODUCTS DETAILS   |\n");
    printf(" ----------------------\n");
    printf("\n");
    printf("ENTER LABEL: %s\n", system->label);
    printf("ENTER NAME: %s\n", system->name);
    printf("ENTER PRODUCT TYPE: %s\n", system->productType);
    printf("ENTER PRODUCE BY: %s\n", system->produceBy);
    printf("ENTER PRICE: %.2f\n", system->price);
}

void SaveToFile(struct ManagementSystem *system){
    FILE *file = fopen("Products_history.txt","a");
    if (file != NULL){
        fprintf(file, "ENTER LABEL: %s\n", system->label);
        fprintf(file, "ENTER NAME: %s\n", system->name);
        fprintf(file, "ENTER PRODUCT TYPE: %s\n", system->productType);
        fprintf(file, "ENTER PRODUCE BY: %s\n", system->produceBy);
        fprintf(file, "ENTER PRICE: %.2f\n", system->price);
        fprintf(file, "---------------------------------------------\n\n");

        fclose(file);
    } else {
        printf("ERROR: Could not open file for saving products detail.");
    }
}

int main(){
    int choice;
    do {
        struct ManagementSystem system;

        printf("\n");
        printf("*-------------------------- PRODUCT MANAGEMENT SYSTEM IN STORES! -------------------------*\n");
        printf("\n");

        InputProducts(&system);

        ProductsDetail(&system);

        SaveToFile(&system);
        
        printf("---------------------------------------------\n");
        printf("\n");
        printf("DO YOU WANT TO MAKE ANOTHER MANAGEMENT SYSTEM? (1 FOR YES / 0 FOR NO): ");
        scanf("%d", &choice);

        if(choice != 1){
            break;
        }
        
    } while (1);

    return 0;
}
