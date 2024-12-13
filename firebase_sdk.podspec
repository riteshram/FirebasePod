Pod::Spec.new do |s|
    s.name         = 'firebase_sdk'
    s.version      = '1.0.0'
    s.summary      = 'A short description of firebase_sdk.'
    s.description  = 'Firebase sdk'
    s.homepage     = 'https://github.com/riteshram/FirebasePod'
    s.license      = { :type => 'MIT', :file => 'LICENSE' }
    s.author       = { 'Ritesh Ramdev' => 'riteshr222@gmail.com' }
    s.source       = { :git => 'https://github.com/riteshram/FirebasePod.git', :tag => s.version.to_s }
    s.vendored_frameworks      = 'Frameworks/firebase_sdk.xcframework'
    s.libraries                = 'c++'
    s.ios.deployment_target    = '16.0'
    s.dependency 'FirebaseRemoteConfig'
  end
