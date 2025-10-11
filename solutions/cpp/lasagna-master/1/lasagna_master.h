#pragma once

#include <string>
#include <vector>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};
// task 1
int preparationTime(std::vector<std::string> layers, int time_per_layer = 2);
// task 2
amount quantities(const std::vector<std::string>& layers);
// task 3
void addSecretIngredient(std::vector<std::string>& my_ingredients_list, const std::vector<std::string>& friend_ingredients_list);
// task 4
std::vector<double> scaleRecipe(const std::vector<double>& quantities, int portions);
// task 5
void addSecretIngredient(std::vector<std::string>& my_ingredients_list, std::string secret_ingredient);

}  // namespace lasagna_master
