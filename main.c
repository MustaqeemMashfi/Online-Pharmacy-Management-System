#include <stdio.h>
#include <stdlib.h>
#include "admin.h"
#include "customer.h"
#include "deliveryman.h"
#include "transaction.h"

int main(){

    int choice;
    print_fornt_page();
    while (1)
        {   
            print_Main_Page();
            scanf("%d",&choice);

            switch (choice)
                    {
                        case 1:
                            if (admin_login()==1)
                                {
                                    admin_menu();
                                }
                                break;

                        case 2:
                            customer_menu();
                            break;

                        case 3:
                            if (delivery_man_login()==1)
                                {
                                    delivery_man_menu();
                                }
                                break;

                        case 4:
                            printf("                                                    +================================+\n");
                            printf("                                                    | Thank you For Using Our System |\n");
                            printf("                                                    +================================+");
                            exit(0);

                        default:
                            printf("                                                           Invalid Choice!\n");
                            printf("                                                         \nPress Enter To Continue");
                            getchar();
                    } 
        }
    return 0;
}

