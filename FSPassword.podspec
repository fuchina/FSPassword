Pod::Spec.new do |s|
  s.name             = 'FSPassword'
  s.version          = '1.1.0'
  s.summary          = 'FSPassword is a tool for show logs when app run'
  s.description      = <<-DESC
		This is a very small software library, offering a few methods to help with programming.
    DESC

  s.homepage         = 'https://github.com/fuchina/FSPassword'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'fudon' => '1245102331@qq.com' }
  
  s.source           = {:git => 'https://github.com/fuchina/FSPassword.git', :tag => s.version.to_s}

  s.public_header_files = 'sdks/FSPassword/classes/*.{h}'
  s.source_files = 'sdks/FSPassword/classes/*.{h}'
  s.ios.vendored_libraries = 'sdks/FSPassword/libs/libFSAccount.a'
  s.ios.deployment_target = '8.2'
  
#  s.frameworks = 'UserNotifications','MessageUI','AudioToolbox','AVFoundation'

#  s.libraries  = 'c++', 'sqlite3', 'z'
  
#  s.dependency 'FSBaseController'
  
#  s.dependency   'YYKit','1.0.9'
#  s.dependency   'WechatOpenSDK','1.8.3'

end
