#include "Box.h"

using namespace shipping;

Box::Box() : Package(), height(0), depth(0), width(0) {}

Box::Box(double new_weight, std::string new_tracking_num, double new_width, double new_height, double new_depth)
    : Package(new_weight, new_tracking_num), height(new_height), depth(new_depth), width(new_width) {}

void Box::set_dimensions(double new_width, double new_height, double new_depth) {
    width = new_width;
    height = new_height;
    depth = new_depth;
}

void Box::get_dimensions(double &out_width, double &out_height, double &out_depth) const {
    out_width = width;
    out_height = height;
    out_depth = depth;
}

double Box::calc_shipping() const {
    // Implement your shipping cost calculation for a box here
    // This is just a placeholder
    return width * height * depth * COST_PER_POUND;
}
