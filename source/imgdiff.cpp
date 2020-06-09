#include <imgdiff/imgdiff.h>
#include <cxxopts.hpp>

using namespace imgdiff;

Imgdiff::Imgdiff(std::string _name) : name(_name) {}

std::string Imgdiff::greet(LanguageCode lang) const {
  switch (lang) {
    default:
    case LanguageCode::EN:
      return "Hello, " + name + "!";
    case LanguageCode::DE:
      return "Hallo " + name + "!";
    case LanguageCode::ES:
      return "¡Hola " + name + "!";
    case LanguageCode::FR:
      return "Bonjour " + name + "!";
  }
}
