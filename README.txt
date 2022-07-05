Author : Aryan Agarwal
Roll : 19CS30005

some points:

(1) Disregard the Miscellaneous folder.

(2) every class in the Source folder as its test<class_name>.cpp and test<class_name>.h file for testing which outputs gets saved to Outputs/UnitTests_<class_name>.txt


(3)Main.cpp contains the sample data as was given in the pdf.
command for running Main.cpp

cd Source
g++ AC2Tier.cpp AC3Tier.cpp ACChairCar.cpp ACFirstClass.cpp Booking.cpp Date.cpp FirstClass.cpp Passenger.cpp Railways.cpp SecondSitting.cpp Sleeper.cpp Station.cpp Main.cpp
./a.out

Ouput gets saved to Outputs/GivenBookingApplication.txt

(4)Application.cpp is for checking the whole program.
command for running Application.cpp

cd Source
g++ AC2Tier.cpp AC3Tier.cpp ACChairCar.cpp ACFirstClass.cpp Booking.cpp Date.cpp FirstClass.cpp Passenger.cpp Railways.cpp SecondSitting.cpp Sleeper.cpp Station.cpp Application.cpp
./a.out

Ouput gets saved to Outputs/TestBookingApplication.txt

(5)command for testing the class AC2Tier

cd Source
g++ AC2Tier.cpp AC3Tier.cpp ACChairCar.cpp ACFirstClass.cpp Booking.cpp Date.cpp FirstClass.cpp Passenger.cpp Railways.cpp SecondSitting.cpp Sleeper.cpp Station.cpp testAC2Tier.cpp
./a.out

Ouput gets saved to Outputs/UnitTests_AC2Tier.txt

(6) similarly all other classes can be tested