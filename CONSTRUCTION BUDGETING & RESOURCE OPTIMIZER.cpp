#include<iostream>
using namespace std;
int main()
{
	double Material_Cost,Labor_and_Contractor_Wages,Machinery_Equipment_Rental_Cost,
	Contingency_Buffer_Percentage,Material_Share,Labor_Share,Machinery_Share,Total_budget;
	int choice;
	do
	{
		cout<<"==================================================\n";
		cout<<"  CONSTRUCTION BUDGETING & RESOURCE OPTIMIZER\n";
		cout<<"==================================================\n";
		cout<<"1. Enter Material Costs (Cement, Steel, Bricks, etc.)\n";
		cout<<"2. Enter Labor & Contractor Wages\n";
		cout<<"3. Enter Machinery & Equipment Rental Cost\n";
		cout<<"4. Set Contingency Buffer Percentage (%)\n";
		cout<<"5. Generate Budget & Resource Optimization Report\n";
		cout<<"6. Exit\n";
		cout<<"Enter choice: \n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					cout<<"1. Enter Material Costs (Cement, Steel, Bricks, etc.)\n";
					cin>>Material_Cost;
					break;
				}
			case 2:
				{
					cout<<"2. Enter Labor & Contractor Wages\n";
					cin>>Labor_and_Contractor_Wages;
					break;
				}
			case 3:
				{
					cout<<"3. Enter Machinery & Equipment Rental Cost\n";
					cin>>Machinery_Equipment_Rental_Cost;
					break;
				}
			case 4:
				{
					cout<<"4. Set Contingency Buffer Percentage (%)\n";
					cin>>Contingency_Buffer_Percentage;
					break;
				}
			case 5:
				{
					cout<<"5. Generate Budget & Resource Optimization Report\n";
					double Base_Cost = Material_Cost +Labor_and_Contractor_Wages + Machinery_Equipment_Rental_Cost;
					double contingency_amount = Base_Cost*(Contingency_Buffer_Percentage/100);
					Total_budget=Base_Cost+contingency_amount;
					if(Total_budget>0)
					{
						Material_Share=(Material_Cost/Total_budget)*100;
						Labor_Share=(Labor_and_Contractor_Wages/Total_budget)*100;
						Machinery_Share=(Machinery_Equipment_Rental_Cost/Total_budget)*100;
					}
					cout << "\n==================================================\n";
                cout << "        CONSTRUCTION COST & BUDGET REPORT\n";
                cout << "==================================================\n";
                cout << "-> Material Cost:           $" << Material_Cost << " (" << Material_Share << "%)\n";
                cout << "-> Labor Wages:             $" << Labor_and_Contractor_Wages << " (" << Labor_Share << "%)\n";
                cout << "-> Machinery Rental:        $" << Machinery_Equipment_Rental_Cost << " (" << Machinery_Share << "%)\n";
                cout << "--------------------------------------------------\n";
                cout << "-> Subtotal (Base Cost):    $" << Base_Cost << "\n";
                cout << "-> Contingency Buffer (" << Contingency_Buffer_Percentage << "%): $" << contingency_amount << "\n";
                cout << "==================================================\n";
                cout << "-> FINAL TOTAL BUDGET:      $" << Total_budget << "\n";
                cout << "==================================================\n\n";
					break;
				}
			case 6:
				{
					cout<<"Exit";
					break;
				}
			default:
				{
					cout<<"Invalid option";
					break;
				}
			
		}
	}
	while(choice!=6);
}
