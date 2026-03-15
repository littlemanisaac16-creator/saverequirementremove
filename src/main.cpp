#include <Geode/Geode.hpp>
#include <Geode/modify/GJSaveManager.hpp>

using namespace geode::prelude;

// We hook into the Save Manager
class $modify(GJSaveManager) {
    // This function checks if you have enough stars/levels to save
    bool canSave() {
        // Instead of checking requirements, we just say "Yes" (true)
        log::info("Bypassing save requirements!");
        return true; 
    }
};
