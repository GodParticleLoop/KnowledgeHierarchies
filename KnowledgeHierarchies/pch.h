#pragma once
#include <windows.h>
#include <unknwn.h>
#include <restrictederrorinfo.h>
#include <hstring.h>
#include <iostream>

#include <winrt/Windows.AI.MachineLearning.h>
//Enables apps to load machine learning models, bind features, and evaluate the results.

#include <winrt/Windows.ApplicationModel.h>
//Provides an app with access to core system functionality and run - time information about its app package, and handles suspend operations.

#include <winrt/Windows.ApplicationModel.Activation.h>
//Enables an app to handle the activation parameters for the activation contracts, appointments, and extensions supported by
////Supportted by winrt::Windows.

#include <winrt/Windows.ApplicationModel.AppExtensions.h>
//Enable your UWP app to host content provided by other UWP apps.Discover, enumerate, and access read - only content from those apps.

#include <winrt/Windows.ApplicationModel.Appointments.h>
//Contains the Appointment class and related support classes.An Appointment represents an appointment in a calendar.

#include <winrt/Windows.ApplicationModel.Appointments.AppointmentsProvider.h>
//Defines operations classes for add appointment and remove appointment requests through activations that an appointments provider interacts with.

#include <winrt/Windows.ApplicationModel.Appointments.DataProvider.h>
//Contains the AppointmentDataProviderConnection class and support classes related to its events.An AppointmentDataProviderConnection allows data transfer between a Universal Windows app and the app or server that owns the calendar information of a user on the device.

#include <winrt/Windows.ApplicationModel.AppService.h>
//Windows app services enable app - to - app communication by allowing your Universal Windows app to provide services to other Universal Windows app.App services let you create UI - less services that apps can call on the same device, and starting with Windows 10, version 1607, on remote devices.

#include <winrt/Windows.ApplicationModel.Background.h>
//Enables an app to schedule background tasks to run app code even when the app is suspended.

#include <winrt/Windows.ApplicationModel.Calls.h>
//Controls multiple aspects of how an application on the phone behaves, including lock - screen interaction, the phone call history, and various telephony options and information.

#include <winrt/Windows.ApplicationModel.Calls.Background.h>
//The classes in #include <winrt/Windows.ApplicationModel.Calls.Background are used by device background tasks to handle changes to phone lines, call states, and voice mail counts for the device.

#include <winrt/Windows.ApplicationModel.Calls.Provider.h>
//Enables an application to record and provide information about the origin of a phone call.

#include <winrt/Windows.ApplicationModel.Chat.h>
//This namespace allows apps to implement messaging through SMS, MMS, and RCS protocols on devices that support it.

#include <winrt/Windows.ApplicationModel.CommunicationBlocking.h>
//Enables applications to support blocking calls and messages.

#include <winrt/Windows.ApplicationModel.Contacts.h>
//Enables apps to select and acquire info about contacts.

#include <winrt/Windows.ApplicationModel.Contacts.DataProvider.h>
//This API is implemented by a server to provide contact information to client apps.

#include <winrt/Windows.ApplicationModel.Contacts.Provider.h>
//Enables apps to create and remove contacts.

#include <winrt/Windows.ApplicationModel.ConversationalAgent.h>
//Provides applications the ability to expose functionality through any digital assistant supported by the Windows platform Agent Activation Runtime(AAR).

#include <winrt/Windows.ApplicationModel.Core.h>
//Provides key application - level functionality for apps.

#include <winrt/Windows.ApplicationModel.DataTransfer.h>
//Contains classes that are used to exchange data between a source app and a target app.These classes are used in share and clipboard operations.

#include <winrt/Windows.ApplicationModel.DataTransfer.DragDrop.h>
//Manages dragging and dropping items.

#include <winrt/Windows.ApplicationModel.DataTransfer.DragDrop.Core.h>
//Manages dragging and dropping items.

#include <winrt/Windows.ApplicationModel.DataTransfer.ShareTarget.h>
//Contains the classes and events that a target app uses to complete share operations and create shortcuts, called QuickLinks, that the system can use to streamline future sharing operations to the app.

#include <winrt/Windows.ApplicationModel.Email.h>
//Supports creating and interacting with email messages, recipients, and attachments.

#include <winrt/Windows.ApplicationModel.Email.DataProvider.h>
//This API is implemented by an email server to provide email data to an email client app.

#include <winrt/Windows.ApplicationModel.ExtendedExecution.h>
//Provides a mechanism for applications to execute when they are not in the foreground.

#include <winrt/Windows.ApplicationModel.ExtendedExecution.Foreground.h>
//Provides a mechanism for applications to perform extended execution while they are in the foreground.

#include <winrt/Windows.ApplicationModel.LockScreen.h>
//You can create an app that acts as the lock screen, allowing greater user personalization.You can develop novel unlock gestures and animations, and also display custom information or appearances for people.

#include <winrt/Windows.ApplicationModel.Payments.h>
//This namespace provides payment functionality equivalent to the W3C Payment Request API specification for Universal Windows Platform(UWP) apps.The W3C Payment Request API allows websites to collect payment information in a way that is easy for both the merchant and the user.

#include <winrt/Windows.ApplicationModel.Payments.Provider.h>
//This namespace provides API that allow your app to facilitate payment transactions submitted by users.

#include <winrt/Windows.ApplicationModel.Preview.Holographic.h>
//Contains classes that let apps interact with the holographic shell, allowing the user to see content in the world around them.

#include <winrt/Windows.ApplicationModel.Preview.InkWorkspace.h>
//Provides support for specifying inking apps in the Ink Workspace.

#include <winrt/Windows.ApplicationModel.Preview.Notes.h>
//Enables a note - taking app to implement a number of features for a faster and more effective note - taking experience in certain situations(see Remarks).

#include <winrt/Windows.ApplicationModel.Resources.h>
//Provides simplified access to application resources, such as strings, that are defined using basic naming conventions for runtime apps.

#include <winrt/Windows.ApplicationModel.Resources.Core.h>
//Provides classes that enable advanced resource loading.

#include <winrt/Windows.ApplicationModel.Resources.Management.h>
//Enables the indexing of source resource files or containers, generating named resource candidates using particular file and folder naming conventions.

#include <winrt/Windows.ApplicationModel.Search.h>
//Provides support for the search pane in apps that participate in the Search contract.The search pane opens when users activate the Search charm and provides a consistent, touch - friendly search box and optional search suggestions.

#include <winrt/Windows.ApplicationModel.Search.Core.h>
//Provides access to search suggestions for the in - app SearchBox control and the search pane.

#include <winrt/Windows.ApplicationModel.SocialInfo.h>
//Enables social media apps to supply feed items to #include <winrt/#include <winrt/Windows.

#include <winrt/Windows.ApplicationModel.SocialInfo.Provider.h>
//Implements functionality for providing social data.

#include <winrt/Windows.ApplicationModel.Store.h>
//Provides types and members for interacting with the Windows Store to add in - app purchases and trial functionality to your Universal Windows Platform(UWP) app.

#include <winrt/Windows.ApplicationModel.Store.LicenseManagement.h>
//Provides APIs for managing license info for apps.

#include <winrt/Windows.ApplicationModel.Store.Preview.h>
//Provides preview APIs for various Microsoft Store - related scenarios.

#include <winrt/Windows.ApplicationModel.Store.Preview.InstallControl.h>
//Provides APIs for programmatically managing the installation of apps and app updates.

#include <winrt/Windows.ApplicationModel.UserActivities.h>
//A User Activity encapsulates a user task that can be continued at a later time, and potentially on a different device.

#include <winrt/Windows.ApplicationModel.UserActivities.Core.h>
//Manages the creation and deletion of user activities.A UserActivity encapsulates a user's task that can be continued at a later time, and potentially on a different device.

#include <winrt/Windows.ApplicationModel.UserDataAccounts.h>
//Contains user data account information needed to access email, appointments, calendars, and so on.

#include <winrt/Windows.ApplicationModel.UserDataAccounts.Provider.h>
//Enables an app to replace the existing account management and syncing functionality previously handled by the core operating system.

#include <winrt/Windows.ApplicationModel.UserDataAccounts.SystemAccess.h>
//Provides functionality for apps to invoke system - level UI to manage sync partnerships on the device.

#include <winrt/Windows.ApplicationModel.UserDataTasks.h>
//Enables apps to select and acquire info about tasks.

#include <winrt/Windows.ApplicationModel.UserDataTasks.DataProvider.h>
//This API is implemented by a server to provide task information to client apps.

#include <winrt/Windows.ApplicationModel.VoiceCommands.h>
//Provides support for handling voice commands in Cortana, entered by speech or text, to access features and functionality from a background app.When an app handles a voice command in the background it can display feedback on the Cortana canvas and communicate with the user using the Cortana voice.

#include <winrt/Windows.ApplicationModel.Wallet.h>
//Provides types for interacting with the Wallet feature of Windows Phone from a Windows Runtime app.

#include <winrt/Windows.ApplicationModel.Wallet.System.h>
//Defines a set of asynchronous actions and operations that manage the wallet items in the system wallet database.These can be used to read the existing items, or to add and remove items.

#include <winrt/Windows.Data.Html.h>
//Provides utility classes for working with HTML.

#include <winrt/Windows.Data.Json.h>
//Provides support for JSON arrays, values, and objects.

#include <winrt/Windows.Data.Pdf.h>
//Contains classes for converting a page in a Portable Document Format(PDF) document to an image file.

#include <winrt/Windows.Data.Text.h>
//Provides support for identifying text segments and for determining the properties of Unicode characters.

#include <winrt/Windows.Data.Xml.Dom.h>
//Provides support for the XML Document Object Model(DOM).

#include <winrt/Windows.Data.Xml.Xsl.h>
//Provides support for the XSLT processor.

#include <winrt/Windows.Devices.h>
//This namespace provides access to the low level device providers, including ADC, GPIO, I2 C, PWM and SPI.

#include <winrt/Windows.Devices.Adc.h>
//Analog - Digital Converter, or ADC, is an electrical component that converts an analog electrical signal(usually voltage) to a digital representation.ADCs usually interface a digital circuit that processes signals from analog world.

#include <winrt/Windows.Devices.Adc.Provider.h>
//This API exposes a Provider interface for the user to implement for a specific controller.The ADC API needs a ADC Provider implementation to talk to the ADC controller.

#include <winrt/Windows.Devices.AllJoyn.h>
//AllJoyn is an open source, cross - platform, DCOM - like framework, and protocol for making remotable method calls, remotely reading or writing properties, and sending one - way "signals" between applications(called "nodes") on a distributed bus.It is intended to be used primarily for Internet of Things scenarios such as turning on / off lights or reading temperatures.

#include <winrt/Windows.Devices.Background.h>
//UWP app use background tasks to perform long - running syncs with devices and update device settings and firmware.The classes in #include <winrt/#include <winrt/Windows.Devices.Background are used by device background tasks to get info provided by the app that triggered the task and to report progress back to the app.

#include <winrt/Windows.Devices.Bluetooth.h>
//The #include <winrt/#include <winrt/Windows.Devices.Bluetooth namespace defines a set of Windows Runtime API that allows UWP app and desktop apps to interact with Bluetooth devices.For more information, see Bluetooth.

#include <winrt/Windows.Devices.Bluetooth.Advertisement.h>
//Allow apps to send and receive Bluetooth Low Energy(LE) advertisements.

#include <winrt/Windows.Devices.Bluetooth.Background.h>
//Provides class describing trigger details for Bluetooth triggers.

#include <winrt/Windows.Devices.Bluetooth.GenericAttributeProfile.h>
//The #include <winrt/#include <winrt/Windows.Devices.Bluetooth.GenericAttributeProfile namespace defines Windows Runtime classes that a UWP app or a desktop application can use to communicate with Bluetooth LE devices.

#include <winrt/Windows.Devices.Bluetooth.Rfcomm.h>
//The #include <winrt/#include <winrt/Windows.Devices.Bluetooth.Rfcomm namespace defines Windows Runtime classes that a UWP app and desktop applications can use to communicate with Bluetooth devices.For more information, see BluetoothTo learn more about how to use #include <winrt/#include <winrt/Windows.Devices.Bluetooth.Rfcomm, see the Bluetooth Rfcomm Chat Sample.

#include <winrt/Windows.Devices.Custom.h>
//Opens a custom device asynchronously, and with the object returned from the open operation send asynchronous IOCTLs to the device.

#include <winrt/Windows.Devices.Display.h>
//Contains components to determine aspects of a physical display.

#include <winrt/Windows.Devices.Display.Core.h>
//Provides ways to manage and present content to the hardware display pipeline for custom compositor software.

#include <winrt/Windows.Devices.Enumeration.h>
//Provides classes for enumerating devices.

#include <winrt/Windows.Devices.Enumeration.Pnp.h>
//Provides classes for enumerating a collection of Pnp device objects, and event handlers for monitoring changes to the objects in the collection asynchronously.

#include <winrt/Windows.Devices.Geolocation.h>
//Provides APIs for getting the current location or tracking the device's location over time. Location information may come from estimating a position from beacons like Wi-Fi access points and cell towers, from the device's IP address, or it may come from other sources such as a GNSS or GPS device.The #include <winrt/Windows.Devices.Geolocation API provides the most appropriate geolocation data from all available sources.

#include <winrt/Windows.Devices.Geolocation.Geofencing.h>
//A geofence is a virtual area around a geographical point.The geofencing APIs enable applications to provide geographically contextual experiences in a timely manner without the need for the app to be continuously running and consuming device resources.Geofencing enables scenarios like popping up a reminder for a user when they are leaving work or home or displaying coupons when the user gets within range of a store.

#include <winrt/Windows.Devices.Gpio.h>
//Contains types for using general - purpose I / O(GPIO) pins in user mode.

#include <winrt/Windows.Devices.Gpio.Provider.h>
//This API exposes a Provider interface and associated classes for the user to implement for a specific controller.The GPIO API needs a GPIO Provider implementation to talk to the GPIO controller.

#include <winrt/Windows.Devices.Haptics.h>
//Provides support for basic, non - directional haptic feedback such as clicks, buzzes, and rumbles that can be tuned through characteristics such as intensity and timing.

#include <winrt/Windows.Devices.HumanInterfaceDevice.h>
//This namespace gives your UWP app access to devices that support the Human Interface Device(HID) protocol.

#include <winrt/Windows.Devices.I2c.h>
//Contains types that you can use to communicate with peripheral devices connected through a inter - integrated circuit(I2 C) bus from an application.

#include <winrt/Windows.Devices.I2c.Provider.h>
//This API exposes a Provider interface and associated classes for the user to implement for a specific controller.The I2C API needs a I2 C Provider implementation to talk to the I2 C controller.

#include <winrt/Windows.Devices.Input.h>
//Provides support for identifying the input devices available(pointer, touch, mouse, and keyboard) and retrieving information about those devices.

#include <winrt/Windows.Devices.Input.Preview.h>
//Provide support for tracking a user's gaze, attention, and presence based on the location and movement of their eyes and head.

#include <winrt/Windows.Devices.Lights.h>
//Provides APIs for accessing and controlling LampArrays and legacy Lamp devices.

#include <winrt/Windows.Devices.Lights.Effects.h>
//Provides simple effects for common LampArray scenarios.

#include <winrt/Windows.Devices.Midi.h>
//This namespace provides classes for using MIDI devices in Windows Runtime app.

#include <winrt/Windows.Devices.Perception.h>
//Provides classes for handling image frames from color cameras, depth sensors, and infrared cameras.

#include <winrt/Windows.Devices.Perception.Provider.h>
//Contains types for implementing providers of perception frames.

#include <winrt/Windows.Devices.PointOfService.h>
//Enables application developers to access Point of Service(POS) peripheral devices.The namespace provides a vendor - neutral interface for accessing POS devices from various manufacturers from the UWP app.

#include <winrt/Windows.Devices.PointOfService.Provider.h>
//Enables a server to provide barcode scanning functionality to client applications.

#include <winrt/Windows.Devices.Portable.h>
//Windows Portable Devices(WPD) enables computers to communicate with attached media and storage devices.This namespace provides methods for identifying Windows Portable Device(WPD) services and storage.

#include <winrt/Windows.Devices.Power.h>
//Provides APIs for detailed battery information.For more info, see Get battery information.

#include <winrt/Windows.Devices.Printers.h>
//Provides APIs for working with 3D printers.

#include <winrt/Windows.Devices.Printers.Extensions.h>
//Contains classes and interfaces that provide access to the Windows Runtime Components for print task configuration and print notifications.

#include <winrt/Windows.Devices.Pwm.h>
//PWM stands for Pulse Width Modulation and describes the basic technique to create repeated square waves of user defined length and duty cycle.Most common uses include driving servo motors, dimming LEDs etc.This API provides users the ability to generate PWM wave forms using a PWM controller connected to the system.

#include <winrt/Windows.Devices.Pwm.Provider.h>
//This API exposes a Provider interface for the user to implement for a specific controller.The PWM API needs a PWM Provider implementation to talk to the PWM controller.

#include <winrt/Windows.Devices.Radios.h>
//The members of this namespace allow your app to find and control radio adapters, like Wi - Fi and Bluetooth, on the device where your app runs, and to query those radios for certain attributes.

#include <winrt/Windows.Devices.Scanners.h>
//Contains the classes, interfaces, structures and other components that are built on top of the Windows Image Acquisition(WIA) COM APIs to provide scan functionality for UWP app and desktop apps.

#include <winrt/Windows.Devices.Sensors.h>
//Provides access to the supported types of sensors and related motion data.

#include <winrt/Windows.Devices.Sensors.Custom.h>
//Provides access to a custom sensor and its related data.

#include <winrt/Windows.Devices.SerialCommunication.h>
//The #include <winrt/Windows.Devices.SerialCommunication namespace defines Windows Runtime classes that a UWP app can use to communicate with a device that exposes a serial port or some abstraction of a serial port.The classes provide functionality to discover such serial device, read and write data, and control serial - specific properties for flow control, such as setting baud rate, signal states.

#include <winrt/Windows.Devices.SmartCards.h>
//Gets info about smart card readers and smart cards; configures physical smart cards; and creates, configures, and deletes Trusted Platform Module(TPM) virtual smart cards.

#include <winrt/Windows.Devices.Sms.h>
//Provides the ability to send and receive Short Message Service(SMS) messages, filter incoming messages, and send messages silently, as well as to query properties about a Mobile Broadband SMS Device.Use this API to implement Mobile Operator(MO) applications that use app - directed SMS to implement MO features such as visual voice mail apps.

#include <winrt/Windows.Devices.Spi.h>
//SPI is a high speed interface used to communicate among integrated components on the same board.

#include <winrt/Windows.Devices.Spi.Provider.h>
//This API exposes a Provider interface and associated classes for the user to implement for a specific controller.The SPI API needs a SPI Provider implementation to talk to the SPI controller.

#include <winrt/Windows.Devices.Usb.h>
//The #include <winrt/Windows.Devices.Usb defines Windows Runtime classes that a UWP app can use to communicate with a USB device that does not belong to a device class, or for which Microsoft does not provide an in - box driver.

#include <winrt/Windows.Devices.WiFi.h>
//Provides a means to scan for nearby WiFi access points, enumerate those that are found, and connect to an access point.

#include <winrt/Windows.Devices.WiFiDirect.h>
//Contains classes that support connecting to associated Wi - Fi Direct devices and associated endpoints for PCs, tablets, and phones.

#include <winrt/Windows.Devices.WiFiDirect.Services.h>
//Provides support for implementing your own Wi - Fi Direct Services.

#include <winrt/Windows.Embedded.DeviceLockdown.h>
//Provides a simple and consistent interface for locking down the available applications and tiles on the device for specific user roles defined by the enterprise.

#include <winrt/Windows.Foundation.h>
//Enables fundamental Windows Runtime functionality, including managing asynchronous operations and accessing property stores.This namespace also defines common value types that represent Uniform Resource Identifier(URI), dates and times, 2 - D measurements, and other basic values.

 #include <winrt/Windows.Foundation.Collections.h>
//Defines standard, specialized, and generic collection objects.This includes the IIterable; , IVector; and IMap; generic interfaces, which are used as the pattern for basic collection support throughout the Windows Runtime API.

#include <winrt/Windows.Foundation.Diagnostics.h>
//Provides classes for logging messages and tracing events.

#include <winrt/Windows.Foundation.Metadata.h>
//Defines the attributes that indicate fundamental properties of Windows Runtime types and members.

#include <winrt/Windows.Foundation.Numerics.h>
//Provides a set of graphics - oriented math types.

#include <winrt/Windows.Gaming.Input.h>
//Provides access to game controller input.

#include <winrt/Windows.Gaming.Input.Custom.h>
//Contains APIs enabling equipment manufacturers to write custom WinRT(Windows Runtime) class libraries for their devices.

#include <winrt/Windows.Gaming.Input.ForceFeedback.h>
//Contains APIs for controlling the force feedback motor on a controller.

#include <winrt/Windows.Gaming.Input.Preview.h>
//This API is not available to all apps.Unless your developer account is specially provisioned by Microsoft, calls to these APIs will fail at runtime.

#include <winrt/Windows.Gaming.Preview.GamesEnumeration.h>
//This API is not available to all apps.Unless your developer account is specially provisioned by Microsoft, calls to these APIs will fail at runtime.

#include <winrt/Windows.Gaming.UI.h>
//Provides ways to use Game bar, game monitoring, and game chat.

#include <winrt/Windows.Gaming.XboxLive.Storage.h>
//Contains GameSaveProvider and GameSaveContainer classes used to create, save, enumerate, and load Xbox Live game saves.

#include <winrt/Windows.Globalization.h>
//Provides globalization support for language profiles, geographic regions, and international calendars.

#include <winrt/Windows.Globalization.Collation.h>
//Provides read - only lists of character groupings.

#include <winrt/Windows.Globalization.DateTimeFormatting.h>
//Enables formatting of dates and times.

#include <winrt/Windows.Globalization.Fonts.h>
//Provides classes that allow apps to select language - appropriate and script - appropriate fonts for text display.

#include <winrt/Windows.Globalization.NumberFormatting.h>
//Provides classes for formatting currencies, decimal numbers, percent values, and permille values, based on the user's languages and geographic region.

#include <winrt/Windows.Globalization.PhoneNumberFormatting.h>
//Provides phone number formatting, validation, and matching with wide global support.

#include <winrt/Windows.Graphics.h>
//Provides basic data types that contain info on how to draw graphics.These data structs are commonly used to define how large surfaces are drawn when using the CompositionVirtualDrawingSurface class.

#include <winrt/Windows.Graphics.Capture.h>
//Enables apps to capture environments, application windows, and displays in a secure, easy to use way with the use of a system picker UI control.

#include <winrt/Windows.Graphics.DirectX.h>
//Specifies pixel formats, and other enumerated constants, for use with Windows Runtime Direct3D 11 interop surfaces.

#include <winrt/Windows.Graphics.DirectX.Direct3D11.h>
//Provides Windows Runtime projections of Microsoft Direct3D APIs to enable Windows Runtime applications and components to exchange Direct3D surfaces and devices.

#include <winrt/Windows.Graphics.Display.h>
//Contains components to determine aspects of a physical display.

#include <winrt/Windows.Graphics.Display.Core.h>
//Gets info about a display and configures their settings to support the display of your content.

#include <winrt/Windows.Graphics.Effects.h>
//Graphics interfaces.

#include <winrt/Windows.Graphics.Holographic.h>
//Contains classes that let apps display holograms in the world around you.

#include <winrt/Windows.Graphics.Imaging.h>
//Enables the decoding, editing, and encoding of image files.

#include <winrt/Windows.Graphics.Printing.h>
//Contains the classes, interfaces, structures and other components that are used by the print driver and by the Windows print system to create and manipulate documents.

#include <winrt/Windows.Graphics.Printing.OptionDetails.h>
//Extends the basic print task options to enable you to have greater control over the printing experience that you present to your users.

#include <winrt/Windows.Graphics.Printing.PrintTicket.h>
//This namespace provides Windows Runtime classes that serve as wrappers over the Print Schema COM interfaces.This allows for the easy configuration of print job instructions from within a UWP print workflow app.

#include <winrt/Windows.Graphics.Printing.Workflow.h>
//This namespace provides the functionality for writing a print workflow app.Print workflow apps are registered to print - capable source applications.They are launched in the background after the source application has elected to print something but before the print data is sent to the printer.Workflow apps are able to alter both the print ticket(printer device settings) and the actual content to be printed, and they can optionally expose this functionality to the user by launching a foreground app midway through the process.This allows for a greater degree of customization of the printing experience.

#include <winrt/Windows.Graphics.Printing3D.h>
//Provides APIs for working with 3D printers.

#include <winrt/Windows.Management.h>
//Provides capabilities to force a sync from an MDM device to the server.This MDM sync protocol is based on the Open Mobile Alliance - Device Management standard.

#include <winrt/Windows.Management.Core.h>
//Provides core functionality for managing apps.

#include <winrt/Windows.Management.Deployment.h>
//Provides functionality for managing app packages.

#include <winrt/Windows.Management.Deployment.Preview.h>
//Provides functionality for finding installed classic desktop apps, and displaying their names and versions.

#include <winrt/Windows.Management.Policies.h>
//Provides the ability for Universal Windows Platform(UWP) apps to query the current Mobile Device Management(MDM) policies on a device.

#include <winrt/Windows.Management.Update.h>
//This API allows users to opt in or out of receiving Windows Insider Preview Builds on their device.This is intended to be used by IoT OEMs

#include <winrt/Windows.Management.Workplace.h>
//Provides functionality for managing apps in an enterprise.

#include <winrt/Windows.Media.h>
//Provides classes for creating and working with media such as photos, audio recordings and videos.

#include <winrt/Windows.Media.AppBroadcasting.h>
//Provides APIs for getting the broadcasting status for the current app.This includes determining whether the app can currently begin broadcasting and, if not, details about why broadcasting can't be started as well as the ability to launch the app broadcasting system setup UI.

#include <winrt/Windows.Media.AppRecording.h>
//Provides APIs for recording the audio and video content of an app to a file, saving screenshots of app content to image files, and querying the current availability of app recording and screenshot functionality.

#include <winrt/Windows.Media.Audio.h>
//Provides APIs for routing, mixing, and processing audio.

#include <winrt/Windows.Media.Capture.h>
//Provides classes for the capture of photos, audio recordings, and videos.

#include <winrt/Windows.Media.Capture.Core.h>
//Provides classes for the capture of variable photo sequences.

#include <winrt/Windows.Media.Capture.Frames.h>
//This namespace provides APIs for obtaining media frames from one or more MediaFrameSource objects representing capture devices.

#include <winrt/Windows.Media.Casting.h>
//This namespace lets an app to cast or send particular media content to a second device and is meant to be device - protocol agnostic.Today, the APIs work with Miracast, DLNA, and Bluetooth, and support images, audio, and video from HTML Tags, ImageElement and MediaElement.

#include <winrt/Windows.Media.ClosedCaptioning.h>
//Provides APIs for retrieving the closed caption formatting settings that the user can set through the system's closed captioning settings page.

#include <winrt/Windows.Media.ContentRestrictions.h>
//Provides classes that define Family Safety settings for a Windows user.

#include <winrt/Windows.Media.Control.h>
//Collection of APIs that allow control of different playback instances.

#include <winrt/Windows.Media.Core.h>
//Contains core media APIs that are used by several different features related to media playback.

#include <winrt/Windows.Media.Core.Preview.h>
//Provides media APIs that may be deprecated in future releases.

#include <winrt/Windows.Media.Devices.h>
//Accesses and controls devices for audio, video, and communications.

#include <winrt/Windows.Media.Devices.Core.h>
//Accesses and controls the device for variable photo sequences.

#include <winrt/Windows.Media.DialProtocol.h>
//The DIAL protocol(DI scover A nd L aunch) lets people launches media apps from a primary device, like a phone or tablet, to a remote device like a television.See http ://www.dial-multiscreen.org/home for more information in the industry-standard protocol.

#include <winrt/Windows.Media.Editing.h>
//Provides functionality for editing, previewing, and saving edited media clips.

#include <winrt/Windows.Media.Effects.h>
//Contains classes for discovering the audio processing chain on a device.

#include <winrt/Windows.Media.FaceAnalysis.h>
//Provides APIs for face detection in bitmaps or video frames.

#include <winrt/Windows.Media.Import.h>
//The #include <winrt/Windows.Media.Import namespace provides APIs for discovering and importing photos and videos from devices including cameras, mass storage devices, phones, and other devices that support photo import.

#include <winrt/Windows.Media.MediaProperties.h>
//Provides classes and other programming elements needed to create properties for media formats.

#include <winrt/Windows.Media.Miracast.h>
//Namespace for Miracast - related functionality.

#include <winrt/Windows.Media.Ocr.h>
//Provides optical character recognition(OCR) API for reading text from images.

#include <winrt/Windows.Media.Playback.h>
//Provides functionality for playing media files from foreground and background tasks.

#include <winrt/Windows.Media.Playlists.h>
//Provides classes for creating and saving media playlists for playback.

#include <winrt/Windows.Media.PlayTo.h>
//Supports the streaming of audio, video, and images to remote devices.

#include <winrt/Windows.Media.Protection.h>
//Provides types that provide content protection management for media content.

#include <winrt/Windows.Media.Protection.PlayReady.h>
//Provides types that provide PlayReady content protection management for media content.

#include <winrt/Windows.Media.Render.h>
//Provides classes for managing media rendering.

#include <winrt/Windows.Media.SpeechRecognition.h>
//Enables speech recognition for command and control within Windows Runtime app.

#include <winrt/Windows.Media.SpeechSynthesis.h>
//Provides support for initializing and configuring a speech synthesis engine(or voice) to convert a text string to an audio stream, also known as text - to - speech(TTS).Voice characteristics, pronunciation, volume, pitch, rate or speed, emphasis, and so on are customized through Speech Synthesis Markup Language(SSML) Version 1.1.

#include <winrt/Windows.Media.Streaming.Adaptive.h>
//Provides the ability to playback multimedia content that is delivered using various adaptive streaming protocols.You can playback Http Live Streaming(HLS) or Dynamic Adaptive Streaming over HTTP(DASH) content.

#include <winrt/Windows.Media.Transcoding.h>
//Contains classes for transcoding audio and video files.

#include <winrt/Windows.Networking.h>
//Provides access to hostnames and endpoints used by network apps.

#include <winrt/Windows.Networking.BackgroundTransfer.h>
//Enables advanced download and upload transfer capabilities within an app.For an overview of Background Transfer capabilities, see Transferring data in the background.Download the Background Transfer sample for examples in JavaScript, C#, and C++.

#include <winrt/Windows.Networking.Connectivity.h>
//Retrieves connection profiles that provide connectivity, usage, and data plan information for established network connections.This data can be used by a connected application to take appropriate action when operating in challenging network scenarios or abiding by data plan limits set by a network provider.

#include <winrt/Windows.Networking.NetworkOperators.h>
//Contains classes that support Mobile Broadband Account management.

#include <winrt/Windows.Networking.Proximity.h>
//Contains classes that support connections between devices that are within close range.

#include <winrt/Windows.Networking.PushNotifications.h>
//Contains classes and interfaces that encapsulate push notifications.

#include <winrt/Windows.Networking.ServiceDiscovery.Dnssd.h>
//Supports the registration and discovery of services that advertise themselves using DNS Service Discovery(DNS - SD).

#include <winrt/Windows.Networking.Sockets.h>
//Provides sockets and WebSockets classes to use for network communications and classes for real - time network notifications received in the background for UWP apps.

#include <winrt/Windows.Networking.Vpn.h>
//The classes in this namespace enable you to create, edit, and manage Virtual Private Network(VPN) connections, and to write plugins for controlling a VPN connection using the Windows VPN Platform.

#include <winrt/Windows.Networking.XboxLive.h>
//This API is not available to all apps.Unless your developer account is specially provisioned by Microsoft, calls to these APIs will fail at runtime.

#include <winrt/Windows.Perception.h>
//Contains classes for perceiving the user's surroundings, letting apps locate and reason about the device relative to the surfaces and holograms around the user.

#include <winrt/Windows.Perception.Automation.Core.h>
//Defines support types for the Perception Automation infrastructure.

//#include <winrt/Windows.Perception.Automation.Monitoring.h>
//Defines support types for the Perception Automation Monitoring infrastructure.

#include <winrt/Windows.Perception.People.h>
//Contains classes that describe people.

#include <winrt/Windows.Perception.Spatial.h>
//Contains classes for reasoning about the spatial relationships within the user's surroundings.

#include <winrt/Windows.Perception.Spatial.Preview.h>
//Contains classes that let apps track spatial nodes, allowing the user to reason about places and things in their surroundings.

#include <winrt/Windows.Perception.Spatial.Surfaces.h>
//Contains classes that describe the surfaces observed in the user's surroundings and their triangle meshes.

#include <winrt/Windows.Phone.ApplicationModel.h>
//Provides an app with access to core system functionality and run - time information about its app package.

#include <winrt/Windows.Phone.Devices.Notification.h>
//The #include <winrt/Windows.Phone.Devices.Notification namespace provides a class that you can use to notify the user by vibrating the phone.

#include <winrt/Windows.Phone.Devices.Power.h>
//The #include <winrt/Windows.Phone.Devices.Power namespace contains a class that provides information about the status of the phone's battery.

#include <winrt/Windows.Phone.Management.Deployment.h>
//Provides classes to query the applications installed on a phone and manage the installation state of application packages.

#include <winrt/Windows.Phone.Media.Devices.h>
//The #include <winrt/Windows.Phone.Media.Devices namespace provides functionality that lets Voice over IP applications route audio to endpoints other than the speakerphone.

//#include <winrt/Windows.Phone.Networking.Voip.h>
//Provides APIs for implementing VoIP applications.

#include <winrt/Windows.Phone.Notification.Management.h>
//Provides members that allow accessories to interact with the phone.

#include <winrt/Windows.Phone.PersonalInformation.h>
//Provides APIs for managing a custom contact store.

#include <winrt/Windows.Phone.PersonalInformation.Provisioning.h>
//This namespace provides APIs that enable authorized entities to provision personal information.

#include <winrt/Windows.Phone.Speech.Recognition.h>
//Enables speech recognition for Windows Phone apps.

#include <winrt/Windows.Phone.StartScreen.h>
//Contains classes that encapsulate tile, toast, and badge notifications for dual sim devices.

#include <winrt/Windows.Phone.System.h>
//Provides information related to system functionality.

#include <winrt/Windows.Phone.System.Power.h>
//The include <winrt/Windows.Phone.System.Power namespace provides classes to indicate whether the phone's battery is in power-saving mode.

#include <winrt/Windows.Phone.System.Profile.h>
//Contains profile information about the phone.

#include <winrt/Windows.Phone.System.UserProfile.GameServices.Core.h>
//Provides access to game services.

//#include <winrt/Windows.Phone.UI.Core.h>
//Provides support for processing input events on the core window.

#include <winrt/Windows.Phone.UI.Input.h>
//Provides support for user input mechanisms for the phone.

#include <winrt/Windows.Security.Authentication.Identity.h>
//Contains classes for interacting with enterprise key credential registration.

//#include <winrt/Windows.Security.Authentication.Identity.Core.h>
//This API is for internal use only and should not be used in your code.

#include <winrt/Windows.Security.Authentication.Identity.Provider.h>
//Supports unlocking Windows with a companion device.

#include <winrt/Windows.Security.Authentication.OnlineId.h>
//Enables both apps and desktop programs to use Live to authenticate users by using their Microsoft account.After authentication, apps can get back a JSON token with an ID that can be used for that user with your application.

#include <winrt/Windows.Security.Authentication.Web.h>
//Enables apps to integrate with online web services without exposing a user's credentials. The web authentication broker provides a set of APIs and infrastructure for apps to use Internet authentication and authorization protocols like OAuth and OpenID.

#include <winrt/Windows.Security.Authentication.Web.Core.h>
//Contains core methods for obtaining tokens from web account providers.

#include <winrt/Windows.Security.Authentication.Web.Provider.h>
//Contains classes for managing web accounts and authentication requests as an online identity provider.

#include <winrt/Windows.Security.Credentials.h>
//Provides a common way to securely store and manage your passcodes, passphrases, and other identification information.

#include <winrt/Windows.Security.Credentials.UI.h>
//Enables you to use credentials without the complexity of the underlying operations, providing a uniform experience for credentials that reduces credential prompting to an absolute minimum.This namespace collects various types of credentials from users, stores them on the local computer, and presents them to web services and proxies by using existing authentication models.

#include <winrt/Windows.Security.Cryptography.h>
//Contains a class that can be used for encoding and decoding data, generating random numbers, and converting between byte arrays and buffers.

#include <winrt/Windows.Security.Cryptography.Certificates.h>
//Contains types that you can use to create certificate requests and install certificate responses.

#include <winrt/Windows.Security.Cryptography.Core.h>
//Contains classes that enable you to create cryptographic keys, to hash and sign content, create message authentication codes, and to encrypt or decrypt data.

#include <winrt/Windows.Security.Cryptography.DataProtection.h>
//Contains a class that enables you to easily encrypt and decrypt static data or a data stream.

#include <winrt/Windows.Security.EnterpriseData.h>
//Contains classes that support Windows Information Protection(WIP).For the full developer picture of how WIP relates to files, buffers, the clipboard, networking, background tasks, and data protection under lock, see Windows Information Protection.

#include <winrt/Windows.Security.ExchangeActiveSyncProvisioning.h>
//Enables an app for mail to evaluate and apply the Exchange Active Synchronization(EAS) policies.

#include <winrt/Windows.Services.Cortana.h>
//Provides types and members for accessing and managing the information an app shares with the Cortana service.

#include <winrt/Windows.Services.Maps.h>
//The #include <winrt/Windows.Services.Maps namespace contains classes that provide location, routing, and geocoding services.

#include <winrt/Windows.Services.Maps.Guidance.h>
//Provides APIs for turn - by - turn guided navigation.

#include <winrt/Windows.Services.Maps.LocalSearch.h>
//Provides APIs to search for business and places.Searches are performed against data that has been cached locally on the device.

#include <winrt/Windows.Services.Maps.OfflineMaps.h>
//Contains classes that you can use to find and download map packages for offline use.

#include <winrt/Windows.Services.Store.h>
//Provides types and members you can use to access and manage Microsoft Store - related data for the current app.For example, you can use this namespace to get Microsoft Store listing and license info for the current app, purchase the current app or products that are offered by the app, or download and install package updates for the app.

#include <winrt/Windows.Services.TargetedContent.h>
//The Targeted Content namespace provides applications with the ability to subscribe to and access cloud - delivered, subscription - specific content and assets.This content is cached locally so that it is available while a device is offline.Subscription content can be updated periodically when new content is available.

#include <winrt/Windows.Storage.h>
//Provides classes for managing files, folders, and application settings.

#include <winrt/Windows.Storage.AccessCache.h>
//Enables and manages access to the most recently used(MRU) list of storage items, and to the list of storage items that the application has saved for efficient future access.

#include <winrt/Windows.Storage.BulkAccess.h>
//Provides classes for searching, accessing, managing, and retrieving information about files and folders in the storage system.

#include <winrt/Windows.Storage.Compression.h>
//Provides a unified interface to the compression features included in Windows that frees developers from responsibility for managing block sizes, compression parameters, and other details that the native compression API requires.

#include <winrt/Windows.Storage.FileProperties.h>
//Provides access to the properties of a file.

#include <winrt/Windows.Storage.Pickers.h>
//Provides classes for creating and managing user interface(UI) elements that let the user browse files, choose files to open, and to choose the name, extension, and location when storing files.

#include <winrt/Windows.Storage.Pickers.Provider.h>
//Provides support for apps that offer files through the file picker by participating in the File Open Picker contract, and for apps that act as a save location for files through file picker by participating in the File Save Picker contract or the Cached File Updater contract.

#include <winrt/Windows.Storage.Provider.h>
//Allows apps to provide real - time updates to files through the Cached File Updater contract.

#include <winrt/Windows.Storage.Search.h>
//Provides classes for enumerating content in storage and performing Advanced Query Syntax(AQS) searches on the content.

#include <winrt/Windows.Storage.Streams.h>
//Provides support for reading to and writing from sequential and random access streams.

#include <winrt/Windows.System.h>
//Enables system functionality such as launching apps, obtaining information about a user, and memory profiling.

#include <winrt/Windows.System.Diagnostics.h>
//Provides diagnostic information about the system and running processes.

#include <winrt/Windows.System.Diagnostics.DevicePortal.h>
//Provides functionality for implementing a custom appx plugin for the Windows Device Portal.

#include <winrt/Windows.System.Diagnostics.Telemetry.h>
//Provides functionality for registering clients with the Connected User Experience and Telemetry component.

#include <winrt/Windows.System.Diagnostics.TraceReporting.h>
//This namespace represents the Connected User Experience and Telemetry component that manages the telemetry escalations.

#include <winrt/Windows.System.Display.h>
//Enables an application to request that a device's display remain on even if there is no user activity for an extended period of time.

//#include <winrt/Windows.System.Implementation.Holographic.h>
//Contains types used in the implementation of Windows components relating to the holographic shell.

#include <winrt/Windows.System.Inventory.h>
//Provides a list of installed Win32 apps available to the current user.This includes apps installed for all users as well as only for the current user.

#include <winrt/Windows.System.Power.h>
//Provides power and energy usage APIs.

#include <winrt/Windows.System.Power.Diagnostics.h>
//Provides debugging APIs for computing your app’s total energy usage in real time.We recommend using these APIs only for debugging.

#include <winrt/Windows.System.Profile.h>
//Enables apps to get information about the system.

#include <winrt/Windows.System.Profile.SystemManufacturers.h>
//Provides info for hardware developers and OEMs.

#include <winrt/Windows.System.RemoteDesktop.h>
//Enables an application to obtain information about Remote Desktop sessions.

#include <winrt/Windows.System.RemoteSystems.h>
//Provides an app with the ability to discover and communicate with other devices.This API is part of Project Rome which allows you to create a multi - platform user experience.

#include <winrt/Windows.System.Threading.h>
//Enables an application to use the thread pool to run work items.

#include <winrt/Windows.System.Threading.Core.h>
//Creates work items that run in response to named events and semaphores.Also preallocates resources for work items that must be guaranteed the ability to run, even in circumstances of heavy(or full) resource allocation.

#include <winrt/Windows.System.Update.h>
//Support for interactive control of system updates.Only available for Windows 10 IoT Core.

#include <winrt/Windows.System.UserProfile.h>
//Enables apps get information about users, set globalization preferences, and control the lock screen image.

//#include <winrt/Windows.UI.h>
//Provides an app with access to core system functionality and run - time information about its UI.

#include <winrt/Windows.UI.Accessibility.h>
//Provides support for working with accessibility devices such as screen readers and magnifiers.

#include <winrt/Windows.UI.ApplicationSettings.h>
//Provides classes that allow developers to define the app settings that appear in the settings pane of the Windows shell.The settings pane provides a consistent place for users to access app settings.

#include <winrt/Windows.UI.Composition.h>
//Provides APIs for user interface composition.

#include <winrt/Windows.UI.Composition.Core.h>
//Provides core APIs for user interface composition.

#include <winrt/Windows.UI.Composition.Desktop.h>
//Provides APIs for user interface composition.

#include <winrt/Windows.UI.Composition.Diagnostics.h>
//Provides APIs for user interface composition diagnostics and debugging.

#include <winrt/Windows.UI.Composition.Effects.h>
//Contains classes that are specific to creating effects for User Interactions.These effects are specific to composition.

#include <winrt/Windows.UI.Composition.Interactions.h>
//Provides functionality that enables input driven animations in the visual layer.

#include <winrt/Windows.UI.Composition.Scenes.h>
//Provides APIs for loading 3D models and composing 3D scenes.

#include <winrt/Windows.UI.Core.h>
//Provides the basic user interface window components, including core input events and event dispatch.

#include <winrt/Windows.UI.Core.AnimationMetrics.h>
//The classes and their properties that are exposed through this namespace retrieve the raw scaling, translation, and opacity parameters used in Windows animations

#include <winrt/Windows.UI.Core.Preview.h>
//Provides preview APIs for various basic user interface window components.

#include <winrt/Windows.UI.Input.h>
//Provides support for the Windows input system.This includes :

#include <winrt/Windows.UI.Input.Core.h>
//Provides support for processing input on a background thread.

#include <winrt/Windows.UI.Input.Inking.h>
//Provides input, processing, and management support for Windows Ink apps.

#include <winrt/Windows.UI.Input.Inking.Analysis.h>
//Provides analysis of ink stroke input for Windows Ink apps.

#include <winrt/Windows.UI.Input.Inking.Core.h>
//Overrides default InkPresenter run - time behavior to provide advanced input, processing, and management support for Windows Ink apps.

#include <winrt/Windows.UI.Input.Inking.Preview.h>
//Provides preview APIs for Windows Ink apps.

#include <winrt/Windows.UI.Input.Preview.h>
//Provides Windows input preview APIs.

#include <winrt/Windows.UI.Input.Preview.Injection.h>
//Provides support for programmatically generating and automating input from a variety of devices such as keyboard, mouse, touch, pen, and gamepad.

#include <winrt/Windows.UI.Input.Spatial.h>
//Contains classes that let apps react naturally to your gaze, hand gestures, motion controllers and voice in the world around you.

#include <winrt/Windows.UI.Notifications.h>
//Contains classes that encapsulate tile, toast, and badge notifications.

#include <winrt/Windows.UI.Notifications.Management.h>
//Provides APIs for reading and managing notifications.

#include <winrt/Windows.UI.Popups.h>
//Provides support for context menu and message dialogs.

#include <winrt/Windows.UI.Shell.h>
//Provides support for connecting apps with native elements of the Windows UI through the Windows Shell.

#include <winrt/Windows.UI.StartScreen.h>
//Provides ways for apps to integrate with the Start screen, such as the creation of secondary tiles and the customization of jump lists.

#include <winrt/Windows.UI.Text.h>
//Provides support for working with textual content.

#include <winrt/Windows.UI.Text.Core.h>
//Provides types for accessing the Windows core text APIs and the text input server.Windows core text is a client - server system that centralizes the processing of keyboard input into a single server.You can use it to manipulate the edit buffer of your custom text input control; the text input server ensures that the contents of your text input control and the contents of its own edit buffer are always in sync via an asynchronous communication channel between the application and the server.

#include <winrt/Windows.UI.ViewManagement.h>
//Provides support for handling and managing the various views associated with the active Universal Windows Platform(UWP) app.

#include <winrt/Windows.UI.ViewManagement.Core.h>
//Provides support for handling and managing CoreInputView objects associated with the active(in foreground) Universal Windows Platform(UWP) application.

#include <winrt/Windows.UI.WebUI.h>
//Provides APIs that are specific to apps written in HTML, JavaScript, and CSS.

#include <winrt/Windows.UI.WebUI.Core.h>
//Provides access to the command bar for apps written in HTML, JavaScript, and CSS.

#include <winrt/Windows.UI.WindowManagement.h>
//Provides support for handling and managing the windows associated with the active app.

#include <winrt/Windows.UI.WindowManagement.Preview.h>
//Provides preview APIs for handling and managing the windows associated with the active app.

#include <winrt/Windows.UI.Xaml.h>
//Provides general framework APIs and application model APIs, and a variety of support classes that are commonly used by many different feature areas.

#include <winrt/Windows.UI.Xaml.Automation.h>
//Defines the support types for Microsoft UI Automation infrastructure.These support types are for implementing Microsoft UI Automation support for a custom control.Also, AutomationProperties provides accessibility info as part of a XAML UI definition.

#include <winrt/Windows.UI.Xaml.Automation.Peers.h>
//Contains automation peers for controls and base classes.

#include <winrt/Windows.UI.Xaml.Automation.Provider.h>
//Defines provider patterns that are implemented by automation peers and recognized by automation clients.

#include <winrt/Windows.UI.Xaml.Automation.Text.h>
//Contains enumerations that report specifics about text automation patterns.

#include <winrt/Windows.UI.Xaml.Controls.h>
//Provides UI controls and classes that support existing and custom controls.

#include <winrt/Windows.UI.Xaml.Controls.Maps.h>
//Defines classes for the Map control.Also defines tile sources and elements that can be placed on a map.

#include <winrt/Windows.UI.Xaml.Controls.Primitives.h>
//Defines classes that represent the component parts of UI controls, or otherwise support the control composition model.Also defines interfaces for control patterns such as snapping and selection.

#include <winrt/Windows.UI.Xaml.Core.Direct.h>
//Provides XamlDirect APIs that allow middleware to access most of Xaml at a more primitive level, achieving better CPU and working set performance.

#include <winrt/Windows.UI.Xaml.Data.h>
//Defines the data binding infrastructure for apps.

#include <winrt/Windows.UI.Xaml.Documents.h>
//Provides basic text and document model classes.

#include <winrt/Windows.UI.Xaml.Hosting.h>
//Provides services that are relevant for XAML design surfaces that are hosted in a larger application.

#include <winrt/Windows.UI.Xaml.Input.h>
//Defines the input and input event infrastructure for apps and UI elements.

#include <winrt/Windows.UI.Xaml.Interop.h>
//Provides basic types for cross - framework integration and interoperation.Notably, this includes interfaces and support types that enable binding patterns.

#include <winrt/Windows.UI.Xaml.Markup.h>
//Provides XAML language support API for UWP app and the Windows Runtime.

#include <winrt/Windows.UI.Xaml.Media.h>
//Provides basic media support, graphics primitives, and brush - drawing API.

#include <winrt/Windows.UI.Xaml.Media.Animation.h>
//Provides animation and storyboard API for transition animations, visual states, or animated UI components.

#include <winrt/Windows.UI.Xaml.Media.Imaging.h>
//Provides types related to imaging and obtaining resources and source files for bitmap images.

#include <winrt/Windows.UI.Xaml.Media.Media3D.h>
//Contains types that support matrix / perspective transformation.

#include <winrt/Windows.UI.Xaml.Navigation.h>
//Provides types that support navigation events as initiated by the Page and Frame classes.

#include <winrt/Windows.UI.Xaml.Printing.h>
//Provides a basic printing support framework for applications.

#include <winrt/Windows.UI.Xaml.Resources.h>
//Contains CustomXamlResourceLoader, which enables loading of custom resource dictionaries as sources.

#include <winrt/Windows.UI.Xaml.Shapes.h>
//Defines basic shapes that are intended for decorative rendering or for compositing non - interactive parts of controls.

#include <winrt/Windows.Web.h>
//Provides information on errors resulting from web service operations.

#include <winrt/Windows.Web.AtomPub.h>
//Enables HTTP CRUD access to Web resources using the AtomPub protocol.The AtomPub sample demonstrates this implementation.

#include <winrt/Windows.Web.Http.h>
//Provides a modern HTTP client API for UWP app.

#include <winrt/Windows.Web.Http.Diagnostics.h>
//Provides a diagnostic facility for tracing and profiling web traffic for applications build on HTTP protocols.

#include <winrt/Windows.Web.Http.Filters.h>
//Provides classes to send HTTP requests and an interface to create filters to target HTTP and REST services in UWP app.

#include <winrt/Windows.Web.Http.Headers.h>
//Provides support for HTTP headers used by the #include <winrt/Windows.Web.Http namespace for UWP app that target HTTP services.

#include <winrt/Windows.Web.Syndication.h>
//Manages syndication feeds.

#include <winrt/Windows.Web.UI.h>
//This namespace allows Win32 apps to host the UWP WebView control Out of Process and take full advantage of HTML5.Most of these APIs are a reflection of the #include <winrt/Windows.UI.Xaml.Controls.WebView control.

#include <winrt/Windows.Web.UI.Interop.h>
//This namespace allows Win32 apps to host the UWP WebView control Out of Process and take full advantage of HTML5.
