#include "lasagna_master.h"
using namespace std;

namespace lasagna_master {

int preparationTime(vector<string> layers, int time_per_layer) {
    return layers.size() * time_per_layer;
}
amount quantities(const vector<string>& layers) {
    amount quantity{0, 0}; // It's necessary to initialise it
    // Add 50g of noodles or 0.2L of sauce for each corresponding layer
    for(size_t i = 0; i < layers.size(); i++) {
        if(layers[i] == "noodles") quantity.noodles += 50;
        if(layers[i] == "sauce") quantity.sauce += 0.2;
    }
    return quantity;
}
void addSecretIngredient(vector<string>& my_ingredients_list, const vector<string>& friend_ingredients_list) { 
    my_ingredients_list.pop_back();    // Use pop_back() to remove the last element "?"
    my_ingredients_list.push_back(friend_ingredients_list.back());
}
vector<double> scaleRecipe(const vector<double>& input_quantities, int portions) {
    vector<double> scaled_quantities{};
    double scaling_portions = portions / 2.0;    // 2.0 ensures floating-point division
    // Scale each ingredient in the recipe
    for(size_t i = 0; i < input_quantities.size(); i++) {
        scaled_quantities.push_back(input_quantities[i] * scaling_portions);
    }
    return scaled_quantities;
}
void addSecretIngredient(vector<string>& my_ingredients_list, string secret_ingredient) {
    my_ingredients_list.pop_back();    // Use pop_back() to remove the last element "?"
    my_ingredients_list.push_back(secret_ingredient);
}
    
}  // namespace lasagna_master
