Pod::Spec.new do |s|
  s.name             = 'FSPassword'
  s.version          = '1.0.2'
  s.summary          = 'FSPassword is a tool for show logs when app run'
  s.description      = <<-DESC
		This is a very small software library, offering a few methods to help with programming.
    DESC

  s.homepage         = 'https://github.com/fuchina/FSPassword'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'fudon' => '1245102331@qq.com' }
  
  s.source           = {:git => 'https://github.com/fuchina/FSPassword.git', :tag => s.version.to_s}

  s.source_files = 'FSPassword/classes/*.{h}'
  s.ios.vendored_libraries = 'FSPassword/libs/libFSPassword.a'
  s.ios.deployment_target = '8.2'
  
  s.dependency   'FSJZBus'

end
