#include <iostream>
#include <iomanip>
#include <vector>

//Analysis
//Input -
// Ocean rise rate per year: 1.5
//Years: 5,7,10
//Output -
//Ocean level rise in 5,7,& 10 years

//Pseudocode
//FUNCTION  displayOceanRise
	//oceanRiseRate = 1.5
	//years = [5,7,10]

	//FOR each year in years
	//	rise = oceanRiseRate * year
	//	write "The ocean level will rise to ", rise << " millimeters in ",year" years"
	//END FOR  
//END FUNCTION

// CALL displayOceanRise


// Function to calculate and display the ocean level rise
void displayOceanRise() {
	// Rate of the ocean rise per year in millimeters
	double oceanRiseRate = 1.5;

	// List of years to calculate the rise for
	std::vector<int> years = { 5,7,10 };

	//Set decimal precision
	std::cout << std::fixed << std::setprecision(1);

	// loop through the each year and calculate the rise
	for (int year : years) {
		double rise = oceanRiseRate * year;
		std::cout << "The ocean level will rise to " << rise << " millimeters in " << year << " years" << std::endl;
	}
}


//Analysis 

//Input - 
// tank capacity: 20 gal
//Miles Per gallon in town: 23.5
// Mile per gallon on th highway: 28.9
//Output-
//Distance the car can travel in town
//Distance the car can travel on the highway

//Pseudocode
//FUNCTION  displayDistacePerTank
	//fulltank = 20;
	//mpgInTown = 23.5;
	//mpgOnTheHighway = 28.9

	//distanceForInTown = fulltank * mpgInTown
	//distaneForOnHighway = fulltank * mpgOnTheHighway
	// write "The distance the car can travel in town is ", townDistance, " miles"
	//write "The distance the car can travel on the highway is ", highwayDistance, " miles"
//END FUNCTION

// CALL displayDistacePerTank


// Function to calculate and display distance per tank
void displayDistancePerTank() {
	// Constants for tank size and miles per gallon
	const double tankCapacity = 20.0;
	const double townMPG = 23.5;
	const double highwayMPG = 28.9;

	// Calculations
	double townDistance = tankCapacity * townMPG;
	double highwayDistance = tankCapacity * highwayMPG;

	// Set precision and display results
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "The distance the car can travel in town is " << townDistance << " miles." << std::endl;
	std::cout << "The distance the car can travel on the highway is " << highwayDistance << " miles." << std::endl;
}
// Analysis
//Input –
//Total surveyed customers: 16,500
//Percent who buy energy drinks: 15%
// Percent of energy drink buyers who prefer citrus flavor: 58%

//Output –
//Number of customers who buy energy drinks
//Number of customers who prefer citrus flavor

// FUNCTION displayEnergyDrinkStats
//     totalCustomers = 16500
//     percentBuyers = 15
//     percentCitrus = 58

//     energyDrinkBuyers = totalCustomers * percentBuyers / 100
//     citrusDrinkers = energyDrinkBuyers * percentCitrus / 100

//     write "The number of energy drink buyers: ", energyDrinkBuyers
//     write "The number of citrus flavor drinkers: ", citrusDrinkers
// END FUNCTION

// CALL displayEnergyDrinkStats


// Function to calculate and display energy drink statistics
void displayEnergyDrinkStats() {
	// Survey data
	const int totalCustomers = 16500;
	const double percentBuyers = 15.0;
	const double percentCitrus = 58.0;

	// Calculations
	int energyDrinkBuyers = static_cast<int>(totalCustomers * percentBuyers / 100);
	int citrusDrinkers = static_cast<int>(energyDrinkBuyers * percentCitrus / 100);

	// Display results
	std::cout << "The number of energy drink buyers: " << energyDrinkBuyers << std::endl;
	std::cout << "The number of citrus flavor drinkers: " << citrusDrinkers << std::endl;
}

int main()
{
	//Call functions here
	displayOceanRise();
	displayDistancePerTank();
	displayEnergyDrinkStats();
	return 0;

}
