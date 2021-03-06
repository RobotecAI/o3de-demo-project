/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#pragma once

#include <AzCore/Component/Component.h>

#include <ROS2-Gem-Demo/ROS2-Gem-DemoBus.h>

namespace ROS2_Gem_Demo
{
    class ROS2_Gem_DemoSystemComponent
        : public AZ::Component
        , protected ROS2_Gem_DemoRequestBus::Handler
    {
    public:
        AZ_COMPONENT(ROS2_Gem_DemoSystemComponent, "{c5c1e616-e0bd-4b49-afd0-053756e0f455}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        ROS2_Gem_DemoSystemComponent();
        ~ROS2_Gem_DemoSystemComponent();

    protected:
        ////////////////////////////////////////////////////////////////////////
        // ROS2_Gem_DemoRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
