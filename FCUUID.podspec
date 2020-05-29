Pod::Spec.new do |spec|
  spec.name         = 'FCUUID'
  spec.version      = '1.3.2'
  spec.license      = { :type => 'MIT' }
  spec.homepage     = 'https://github.com/fabiocaccamo/FCUUID'
  spec.authors      = { 'Fabio Caccamo' => 'fabio.caccamo@gmail.com' }
  spec.summary      = 'UUID / Universally Unique Identifiers library as alternative to UDID and identifierForVendor.'
  spec.source       = { :git => 'https://github.com/fabiocaccamo/FCUUID.git' }
  spec.source_files = 'FCUUID/*.{h,m}'
  spec.framework    = 'Foundation', 'Security'
  spec.ios.framework = 'UIKit'
  spec.tvos.framework = 'UIKit'
  spec.macos.framework = 'AppKit'
  spec.requires_arc = true
  spec.dependency 'UICKeyChainStore'

  spec.ios.deployment_target = '5.0'
  spec.tvos.deployment_target = '9.0'
  spec.macos.deployment_target = '10.14'
end
