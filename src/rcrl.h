#pragma once

#include <vector>
#include <string>

namespace rcrl
{
enum Mode
{
    GLOBAL,
    VARS,
    ONCE
};

void        cleanup_plugins();
void        reconstruct_plugin_source_file();
void        submit_code(const std::string& code, Mode mode);
std::string get_new_compiler_output();
bool        is_compiling();
bool        try_get_exit_status_from_compile(int& exitcode);
void        copy_and_load_new_plugin();
} // namespace rcrl