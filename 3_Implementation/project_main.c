#include "pattern.h"

#include "stdio.h"
#include "stdlib.h"
/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Start of the application */
int main()
{
    printf("\n****\t Welcome to the Patterns World\t****\n");
    int flag=0;
    while(flag==0)
    {
    int choice;
    printf("\nAvailable Patterns are:");
    printf("\n1. Square Star Pattern\n2. Hollow Square Star Pattern with Diagonal\n3. Rhombus Star Pattern\n4. Hollow Rhombus Star Pattern\n5. Mirrored Rhombus Star Pattern\n6. Hollow Mirrored Rhombus Star Pattern\n7. Right Triangle Star Pattern\n8. Mirrored Right Triangle Star Pattern\n9. Hollow Right Triangle Star Pattern\n10. Hollow Inverted Mirrored Right Triangle Star Pattern\n11. Hollow Inverted Right Triangle Star Pattern\n12. Inverted Right Triangle Star Pattern\n13. Inverted Mirrored Right Triangle Star Pattern\n14. Hollow Square Star Pattern\n15. Pyramid Star Pattern\n16. Hollow Pyramid Star Pattern\n17. Inverted Pyramid Star Pattern\n18. Right Arrow Star Pattern\n19. Half Diamond Star Pattern\n20. Left Arrow Star Pattern\n21. Plus Star Pattern\n22. Diamond Star Pattern\n23. X Star Pattern\n24. Exit");
    printf("\n\tEnter your choice\n");
   
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            square_star_pattern();
            break;
        case 2:
            hollow_square_star_pattern_with_diagonal();
            break;
        case 3:
            rhombus_star_pattern();
            break;
        case 4:
            hollow_rhombus_star_pattern();
            break;
        case 5:
            mirrored_rhombus_star_pattern();
            break;
        case 6:
            hollow_mirrored_rhombus_star_pattern();
            break;
        case 7:
            right_triangle_star_pattern();
            break;
        case 8:
            mirrored_right_triangle_star_pattern();
            break;
        case 9:
            hollow_right_triangle_star_pattern();
            break;
        case 10:
            hollow_inverted_mirrored_right_triangle_star_pattern();
            break;
        case 11:
            hollow_inverted_right_triangle_star_pattern();
            break;
        case 12:
            inverted_right_triangle_star_pattern();
            break;
        case 13:
            inverted_mirrored_right_triangle_star_pattern();
            break;
        case 14:
            hollow_square_star_pattern();
            break;
        case 15:
            pyramid_star_pattern();
            break;
        case 16:
            hollow_pyramid_star_pattern();
            break;
        case 17:
            inverted_pyramid_star_pattern();
            break;
        case 18:
            right_arrow_star_pattern();
            break;
        case 19:
            half_diamond_star_pattern();
            break;
        case 20:
            left_arrow_star_pattern();
            break;
        case 21:
            plus_star_pattern();
            break;
        case 22:
            diamond_star_pattern();
            break;
        case 23:
            x_star_pattern();
            break;
        case 24:
            printf("Thanks you for using our Application\n");
            flag=1;
            break;
        default:
            printf("\n\t---Please Choose a pattern from given List of Patterns---\n");
    }
    }
}

