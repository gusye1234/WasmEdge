// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#include "host/host_example_counter/countermodule.h"
#include "host/host_example_counter/counterfunc.h"

namespace WasmEdge {
namespace Host {

/// Register your functions in module.
CounterModule::CounterModule()
    : ImportObject("counter_function") {
  addHostFunc("counter_function_click",
              std::make_unique<CounterFuncClick>(Env));
  addHostFunc("counter_function_get_count",
              std::make_unique<CounterFuncGetCount>(Env));
  addHostFunc("counter_function_forward_by",
              std::make_unique<CounterFuncForwardBy>(Env));
}

} // namespace Host
} // namespace WasmEdge
