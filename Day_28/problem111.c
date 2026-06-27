#include <stdio.h>
int main() {
    int totalSeats = 10, bookedSeats = 0;
    int choice, seatsToBook;
    do {
        printf("\n1. Book Tickets  2. Show Available Seats  3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter number of seats to book: ");
            scanf("%d", &seatsToBook);
            if (bookedSeats + seatsToBook > totalSeats)
                printf("Not enough seats available\n");
            else {
                bookedSeats += seatsToBook;
                printf("Booking successful! %d seat(s) booked\n", seatsToBook);
            }
        } else if (choice == 2) {
            printf("Available seats: %d\n", totalSeats - bookedSeats);
        }
    } while (choice != 3);
    return 0;
}