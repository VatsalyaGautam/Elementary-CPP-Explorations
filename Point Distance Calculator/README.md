# Point and Distance Calculation in 2D Plane

## Overview

This C++ program demonstrates the calculation of the Euclidean distance between two points in a 2D plane. It utilizes two classes, `Point` and `Distance`, to encapsulate the logic and promote a modular and object-oriented design.

## Classes

### 1. Point Class

The `Point` class represents a point with x and y coordinates. It includes a constructor to initialize the coordinates and a `display_data` method to print the location of the point.

### 2. Distance Class

The `Distance` class contains a method named `distance` that calculates the distance between two `Point` objects using the Euclidean distance formula.

## Usage

The `main` function creates two points (`p` and `q`) and displays their coordinates using the `display_data` method. It then calculates and prints the distance between these two points using the `Distance` class.

```cpp
int main()
{
    Point p(1, 2);
    p.display_data();

    Point q(4, 3);
    q.display_data();

    Distance dist;
    int kms = dist.distance(p, q);
    std::cout << "The distance between the points is " << kms << std::endl;

    return 0;
}
```

## How to Run

Compile the program using a C++ compiler (e.g., g++):

```bash
g++ your_file_name.cpp -o distance_calculation
```

Run the compiled executable:

```bash
./distance_calculation
```

This will execute the program and output the distance between the two points.

## Additional Notes

Feel free to explore and modify the code for educational purposes. Understand how the principles of object-oriented programming and mathematical calculations are implemented in this example.
