/*
 *  Copyright (c) 2016, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  Redistributions of source code must retain the above copyright
 *  notice, this list of conditions and the following disclaimer.
 */

/**
 * @file
 *   This file includes definitions for using mbedTLS.
 */

#ifndef OT_MBEDTLS_HPP_
#define OT_MBEDTLS_HPP_

#if !OPENTHREAD_ENABLE_MULTIPLE_INSTANCES

namespace ot {
namespace Crypto {

/**
 * @addtogroup core-security
 *
 * @{
 *
 */

/**
 * This class implements mbedTLS memory.
 *
 */
class MbedTls
{
public:
    /**
     * This constructor initializes the object.
     *
     */
    MbedTls(void);
};

/**
 * @}
 *
 */

}  // namespace Crypto
}  // namespace ot

#endif // #if !OPENTHREAD_ENABLE_MULTIPLE_INSTANCES

#endif  // OT_MBEDTLS_HPP_