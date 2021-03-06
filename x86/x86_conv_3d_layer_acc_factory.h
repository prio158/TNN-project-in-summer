// Tencent is pleased to support the open source community by making TNN available.
//
// Copyright (C) 2020 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

#ifndef TNN_SOURCE_TNN_DEVICE_X86_X86_CONV_3D_LAYER_ACC_FACTORY_H_
#define TNN_SOURCE_TNN_DEVICE_X86_X86_CONV_3D_LAYER_ACC_FACTORY_H_

#include "tnn/device/x86/acc/x86_layer_acc.h"
#include <memory>
#include <type_traits>

namespace TNN_NS {

class X86Conv3DLayerAccFactory {
public:
    static void CreateImpFP(const std::vector<Blob *> &inputs, const std::vector<Blob *> &outputs, LayerParam *param,
                            std::shared_ptr<X86LayerAcc> &conv_acc_impl);

    // static void CreateImpInt8(const std::vector<Blob *> &inputs, const std::vector<Blob *> &outputs, LayerParam *param,
    //                         std::shared_ptr<X86LayerAcc> &conv_acc_impl);
};

}  // namespace TNN_NS

#endif  // TNN_SOURCE_TNN_DEVICE_X86_X86_CONV_LAYER_ACC_FACTORY_H_
