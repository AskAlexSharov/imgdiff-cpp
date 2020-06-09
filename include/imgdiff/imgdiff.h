#pragma once

#include <string>

namespace imgdiff {

  /**  Language codes to be used with the Imgdiff class */
  enum class LanguageCode { EN, DE, ES, FR };

  /**
   * A class for saying hello in multiple languages
   */
  class Imgdiff {
    std::string name;

  public:
    /**
     * Creates a new imgdiff
     * @param name the name to greet
     */
    Imgdiff(std::string name);

    /**
     * Creates a localized string containing the greeting
     * @param lang the language to greet in
     * @return a string containing the greeting
     */
    std::string greet(LanguageCode lang = LanguageCode::EN) const;
  };

}  // namespace imgdiff
