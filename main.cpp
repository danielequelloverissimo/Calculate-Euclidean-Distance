// Calculate and display the Euclidean distance between two points in a three-dimensional space.
// danielequelloverissimo
// https://github.com/danielequelloverissimo

#include <iostream>
#include <cmath>
using namespace std;

// Define a structure named PointStruct to hold the coordinates of a point in 3D space.
struct PointStruct
{
    float x, y, z; // Coordinates of the point (x, y, z).
} pointA, pointB; // Declare two instances of the PointStruct named pointA and pointB.

// Function prototype to calculate the Euclidean distance between two points.
float calculateEuclideanDistance(struct PointStruct point1, struct PointStruct point2);

int main()
{
    float result; // Variable to store the calculated distance.

    // Prompt the user to input the coordinates of point A.
    cout << "Enter the coordinates of point A (x y z): ";
    cin >> pointA.x >> pointA.y >> pointA.z;

    // Prompt the user to input the coordinates of point B.
    cout << "Enter the coordinates of point B (x y z): ";
    cin >> pointB.x >> pointB.y >> pointB.z;

    // Calculate the Euclidean distance between points A and B using the defined function.
    result = calculateEuclideanDistance(pointA, pointB);

    // Display the calculated Euclidean distance between points A and B.
    cout << "The three-dimensional Euclidean distance between points A and B is: " << result << endl;

    return 0;
}

// Function definition to calculate the Euclidean distance between two points.
float calculateEuclideanDistance(struct PointStruct point1, struct PointStruct point2)
{
    float distance; // Variable to store the calculated distance.

    // Calculate the Euclidean distance using the distance formula.
    distance = sqrt(pow(point2.x - point1.x, 2) + pow(point2.y - point1.y, 2) + pow(point2.z - point1.z, 2));

    return distance; // Return the calculated distance.
}
