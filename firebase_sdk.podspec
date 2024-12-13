Pod::Spec.new do |spec|
    spec.name                     = 'firebase_sdk'
    spec.version                  = '1.0.0'
    spec.homepage                 = 'https://example.com'
    spec.source                   = { :git => 'https://github.com/riteshram/FirebasePod.git', :tag => s.version.to_s }
    spec.authors                  = ''
    spec.license                  = ''
    spec.summary                  = 'A Kotlin Multiplatform library using Firebase Remote Config'
    spec.vendored_frameworks      = 'firebase_sdk.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target    = '16.0'
    spec.dependency 'FirebaseRemoteConfig'
                
                
                
                
                
end