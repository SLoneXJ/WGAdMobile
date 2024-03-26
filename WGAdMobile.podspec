#
#  Be sure to run `pod spec lint WGAdMobile.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  spec.name         = "WGAdMobile"
  spec.version      = "3.0.0"
  spec.summary      = "WGAdMobile SDK."

  # This description is used to generate tags and improve search results.
  #   * Think: What does it do? Why did you write it? What is the focus?
  #   * Try to keep it short, snappy and to the point.
  #   * Write the description between the DESC delimiters below.
  #   * Finally, don't worry about the indent, CocoaPods strips it!
  spec.description  = <<-DESC
  TODO: Add long description of the pod here.
                   DESC

  spec.homepage     = "https://github.com/SLoneXJ"
  # spec.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"


  # ―――  Spec License  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Licensing your code is important. See https://choosealicense.com for more info.
  #  CocoaPods will detect a license file if there is a named LICENSE*
  #  Popular ones are 'MIT', 'BSD' and 'Apache License, Version 2.0'.
  #

  spec.license      = { :type => "MIT", :file => "LICENSE" }


  # ――― Author Metadata  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Specify the authors of the library, with email addresses. Email addresses
  #  of the authors are extracted from the SCM log. E.g. $ git log. CocoaPods also
  #  accepts just a name if you'd rather not provide an email address.
  #
  #  Specify a social_media_url where others can refer to, for example a twitter
  #  profile URL.
  #

  spec.author             = { "Mickey" => "wgad@123.com" }
  # Or just: spec.author    = "Mickey"
  # spec.authors            = { "Mickey" => "rare1020@sina.com" }
  # spec.social_media_url   = "https://twitter.com/Mickey"

  # ――― Platform Specifics ――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If this Pod runs only on iOS or OS X, then specify the platform and
  #  the deployment target. You can optionally include the target after the platform.
  #

  # spec.platform     = :ios
  # spec.platform     = :ios, "5.0"

  #  When using multiple platforms
  spec.ios.deployment_target = "11.0"
  spec.platform     = :ios, "11.0"
  # spec.osx.deployment_target = "10.7"
  # spec.watchos.deployment_target = "2.0"
  # spec.tvos.deployment_target = "9.0"
  # spec.visionos.deployment_target = "1.0"


  # ――― Source Location ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Specify the location from where the source should be retrieved.
  #  Supports git, hg, bzr, svn and HTTP.
  #

  spec.source       = { :git => "https://github.com/SLoneXJ/WGAdMobile", :tag => "#{spec.version}" }


  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  CocoaPods is smart about how it includes source code. For source files
  #  giving a folder will include any swift, h, m, mm, c & cpp files.
  #  For header files it will include any header in the folder.
  #  Not including the public_header_files will make all headers public.
  #

  spec.source_files  = "Classes", "Classes/**/*.{h,m}"
  spec.exclude_files = "Classes/Exclude"

  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }
  spec.static_framework = true

  spec.vendored_libraries = 'WGAdMobile/*.a','WGAdMobile/wg_tb/*.a'
  spec.source_files = 'WGAdMobile/*.{h}'
  spec.dependency 'GDTMobSDK', '4.14.12'

  #s.dependency 'Ads-CN', '~> 5.7'
  spec.dependency 'Ads-Fusion-CN-Beta','~> 5.9'
  spec.dependency 'Ads-Fusion-CN-Beta/CSJMediation'

  spec.dependency 'KSAdSDK', '3.3.57'

  spec.dependency 'MintegralAdSDK', '~> 7.0'
  spec.dependency 'MintegralAdSDK/RewardVideoAd'
  spec.dependency 'MintegralAdSDK/BannerAd'
  spec.dependency 'MintegralAdSDK/SplashAd'
  spec.dependency 'MintegralAdSDK/InterstitialAd'
  spec.dependency 'MintegralAdSDK/NativeAdvancedAd'

#  s.dependency 'SigmobAd-iOS', '~> 4.2'

  spec.dependency 'BaiduMobAdSDK','~> 5.0'

  spec.dependency 'ToBid-iOS', '~> 3.3'
  spec.dependency 'BeiZiSDK-iOS/BeiZiSDK-iOS'
  
  spec.dependency 'CSJMAdmobAdapter', '10.0.0.0'
  spec.dependency 'CSJMBaiduAdapter', '5.14.0'
  spec.dependency 'CSJMGdtAdapter', '4.14.30.0'
  spec.dependency 'CSJMKlevinAdapter', '2.11.0.211.1'
  spec.dependency 'CSJMKsAdapter', '3.3.42.0'
  spec.dependency 'CSJMMintegralAdapter', '7.3.4.0.1'
  spec.dependency 'CSJMSigmobAdapter', '4.8.0.0'
  spec.dependency 'CSJMUnityAdapter', '4.3.0.0'

end
