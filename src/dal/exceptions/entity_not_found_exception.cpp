//
// Created by Dhanush Nadella on 8/24/25.
//

#include "exceptions/entity_not_found_exception.h"
#include <format>
#include <stdexcept>

namespace dal::exception {

EntityNotFoundException::EntityNotFoundException(std::string_view entity_type, const std::string& entity_identifier)
    : std::runtime_error(std::format("{} '{}' not found.", entity_type, entity_identifier)) {}

}
