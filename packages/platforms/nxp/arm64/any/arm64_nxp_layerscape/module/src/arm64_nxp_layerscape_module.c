/************************************************************
 * <bsn.cl fy=2014 v=onl>
 * 
 *        Copyright 2016 NXP Semiconductor, Inc.
 * 
 * Licensed under the Eclipse Public License, Version 1.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 * 
 *        http://www.eclipse.org/legal/epl-v10.html
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the
 * License.
 * 
 * </bsn.cl>
 ************************************************************
 *
 *
 *
 ***********************************************************/

#include <arm64_nxp_layerscape/arm64_nxp_layerscape_config.h>

#include "arm64_nxp_layerscape_log.h"

static int
datatypes_init__(void)
{
#define ARM64_NXP_LAYERSCAPE_ENUMERATION_ENTRY(_enum_name, _desc)     AIM_DATATYPE_MAP_REGISTER(_enum_name, _enum_name##_map, _desc,                               AIM_LOG_INTERNAL);
#include <arm64_nxp_layerscape/arm64_nxp_layerscape.x>
    return 0;
}

void __arm64_nxp_layerscape_module_init__(void)
{
    AIM_LOG_STRUCT_REGISTER();
    datatypes_init__();
}

int __onlp_platform_version__ = 1;