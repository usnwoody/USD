#include <stdio.h>
#include <stdlib.h>
void printMainScreen();
void allPlateReport(int A[], int B[], int C[], int D[]);
void plateInfo(int A[], int B[], int C[], int D[]);
void parking(int A[], int B[], int C[], int D[], int plate);
void speeding(int A[], int B[], int C[], int D[], int plate);
void drinking(int A[], int B[], int C[], int D[], int plate);
void ticket(int a[], int b[]);


int main() {
    int plate;
    char entry;
    int row = 25;
    int col = 25;
    int Plates[25] = {102241,102242,992943,992944,112200,112201,112202,102203,102204,102205,102206,102207,102208,102209,102210,102211,102212,102213,102214,102215,102216,102217,102218,102219,102220};
    int ParkingTicket[25] = {10,4,20,8,10,4,20,2,5,10,11,22,0,0,1,2,4,6,8,9,21,13,4,4,34};
    int SpeedingTicket[25] = {3,0,4,2,3,0,7,3,3,3,2,8,0,0,3,2,2,2,1,1,2,2,1,1,22};
    int DrunkTicket[25] = {1,0,2,0,1,0,1,2,2,1,1,3,0,0,1,0,1,0,0,0,0,0,0,0,4};

    
    
   
while(entry != 'q'){    
    printMainScreen();
    scanf(" %c", &entry);
    
    
    switch(entry){

        case ('P'):
        case ('p'):    
            entry = 'p';
            break;

        case ('S'):
        case ('s'):
            entry = 's';
            break;

        case ('D'):
        case ('d'):
            entry = 'd';
            break;

        case ('R'):
        case ('r'):
            entry = 'r';
            break;    

        case ('A'):
        case ('a'):
            entry = 'a';
            break;

        //exit
        case ('Q'):
        case ('q'):
            entry = 'q';
            break;
	}
   
   
    if(entry == 'p'){
        parking(Plates, ParkingTicket, SpeedingTicket, DrunkTicket, plate);
    }
    if(entry == 's'){
        speeding(Plates, ParkingTicket, SpeedingTicket, DrunkTicket, plate);
    }
    if(entry == 'd'){
        drinking(Plates, ParkingTicket, SpeedingTicket, DrunkTicket, plate);
    }
    if(entry == 'r'){
        plateInfo(Plates, ParkingTicket, SpeedingTicket, DrunkTicket);
    }
    if(entry == 'a'){
        allPlateReport(Plates, ParkingTicket, SpeedingTicket, DrunkTicket);
    }
    if(entry == 'q'){
        exit(0);
    }
}
   return 0;
}


//functions:

//main menu screen
void printMainScreen(){
printf("\nP:\tAdd a parking ticket\n");
printf("S:\tAdd a speeding ticket\n");
printf("D:\tAdd a drunk driving ticket\n");
printf("R:\tPrint history of a particular driver\n");
printf("A:\tPrint history of all cars\n");
printf("Q:\tQuit the program\n");
printf("--------------------------------------------\n");
printf("Enter a Command:\n");
}

//all plates report
void allPlateReport(int A[], int B[], int C[], int D[]){
    printf("Plate\t\tNo of\t\tNo of \t\tNo of\n");
    printf("Number\t\tParking\t\tSpeeding\t\tDrinking\n");
    printf("--------------------------------------------------\n");
    for(int i = 0; i < 25; i++){
        printf("%d\t\t%d\t\t%d\t\t%d\n", A[i], B[i], C[i], D[i]);
       }
}

//single plate info
void plateInfo(int A[], int B[], int C[], int D[]){
    int plate;
    printf("\nEnter the plate number:\n");
    scanf("%d", &plate);
    for(int e = 0; e < 25; e++){
        if (A[e] == plate){
            printf("\nThe plate number is:\t\t\t%d\n", A[e]);
            printf("Number of parking tickets:\t\t%d\n", B[e]);
            printf("Number of speeding tickets:\t\t%d\n", C[e]);
            printf("Number of drunk driving tickets:\t%d\n", D[e]);
        }
    }
}

//add parking ticket
void parking(int A[], int B[], int C[], int D[], int plate){
        printf("ADD A PARKING TICKET\n");
        printf("--------------------------\n");
        ticket(A, B);
}

//add speeding ticket
void speeding(int A[], int B[], int C[], int D[], int plate){
        printf("ADD A SPEEDING TICKET\n");
        printf("--------------------------\n");
        ticket(A, C);
}

//add drunk driving ticket
void drinking(int A[], int B[], int C[], int D[], int plate){
        printf("ADD A DRUNK DRIVING TICKET\n");
        printf("--------------------------\n");
        ticket(A, D);
}


void ticket(int a[], int b[]){
    int zed, chk, pin;
    chk = 0;
    printf("Enter the plate number:\n");
    while (chk == 0){
        scanf("%d", &zed);
        for(pin = 0; pin < 25; pin++){
            if(zed == a[pin]){
                b[pin]++;
                printf("Ticket has been added to plate!\n");
                chk++;
            }
        }
        if(chk == 0)
            printf("Plate could not be found, please check the number and try again\n");
    }
}