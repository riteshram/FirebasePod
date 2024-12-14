Pod::Spec.new do |spec|
    spec.name                     = 'FirebaseSDK'
    spec.version                  = '1.0.0'
    spec.homepage                 = 'https://github.com/riteshram/FirebasePod'
    spec.source                   = { :git => 'https://github.com/riteshram/FirebasePod.git', :tag => '1.0.0' }
    spec.authors                  = 'Ritesh'
    spec.license                  = { :type => 'MIT', :text => 'License text'}
    spec.summary                  = 'CocoaPods firebase library'
    spec.vendored_frameworks      = 'FirebaseSDK.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target    = '16.0'
    spec.dependency 'FirebaseRemoteConfig'
                
                
                
                
                
end