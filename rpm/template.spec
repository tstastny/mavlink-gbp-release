Name:           ros-jade-mavlink
Version:        2015.7.7
Release:        0%{?dist}
Summary:        ROS mavlink package

Group:          Development/Libraries
License:        LGPLv3
URL:            http://qgroundcontrol.org/mavlink/
Source0:        %{name}-%{version}.tar.gz

Requires:       python-devel
Requires:       ros-jade-catkin
BuildRequires:  cmake
BuildRequires:  python-devel

%description
MAVLink message marshaling library. This package provides C-headers and
pymavlink library.

%prep
%setup -q

%build
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree that was dropped by catkin, and source it.  It will
# set things like CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/jade/setup.sh" ]; then . "/opt/ros/jade/setup.sh"; fi
mkdir -p obj-%{_target_platform} && cd obj-%{_target_platform}
%cmake .. \
        -UINCLUDE_INSTALL_DIR \
        -ULIB_INSTALL_DIR \
        -USYSCONF_INSTALL_DIR \
        -USHARE_INSTALL_PREFIX \
        -ULIB_SUFFIX \
        -DCMAKE_INSTALL_PREFIX="/opt/ros/jade" \
        -DCMAKE_PREFIX_PATH="/opt/ros/jade" \
        -DSETUPTOOLS_DEB_LAYOUT=OFF \
        -DCATKIN_BUILD_BINARY_PACKAGE="1" \

make %{?_smp_mflags}

%install
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree that was dropped by catkin, and source it.  It will
# set things like CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/jade/setup.sh" ]; then . "/opt/ros/jade/setup.sh"; fi
cd obj-%{_target_platform}
make %{?_smp_mflags} install DESTDIR=%{buildroot}

%files
/opt/ros/jade

%changelog
* Tue Jul 07 2015 Vladimir Ermakov <vooon341@gmail.com> - 2015.7.7-0
- Autogenerated by Bloom

* Fri Jun 12 2015 Vladimir Ermakov <vooon341@gmail.com> - 2015.6.12-0
- Autogenerated by Bloom

* Sat Jun 06 2015 Vladimir Ermakov <vooon341@gmail.com> - 2015.6.6-0
- Autogenerated by Bloom

* Mon May 18 2015 Vladimir Ermakov <vooon341@gmail.com> - 2015.5.18-0
- Autogenerated by Bloom

* Tue May 05 2015 Vladimir Ermakov <vooon341@gmail.com> - 2015.5.5-0
- Autogenerated by Bloom

* Wed Apr 08 2015 Vladimir Ermakov <vooon341@gmail.com> - 2015.4.4-0
- Autogenerated by Bloom

* Sat Apr 04 2015 Vladimir Ermakov <vooon341@gmail.com> - 2014.4.4-0
- Autogenerated by Bloom

* Wed Mar 11 2015 Vladimir Ermakov <vooon341@gmail.com> - 2015.3.11-0
- Autogenerated by Bloom

* Tue Mar 03 2015 Vladimir Ermakov <vooon341@gmail.com> - 2015.3.3-0
- Autogenerated by Bloom

* Wed Feb 25 2015 Vladimir Ermakov <vooon341@gmail.com> - 2015.2.25-0
- Autogenerated by Bloom

