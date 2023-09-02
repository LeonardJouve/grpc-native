import {NativeModules} from 'react-native';

const {GrpcModule} = NativeModules;

type GrpcModule = {
    setHost: (host: string) => void;
    setPort: (port: number) => void;
};

export default GrpcModule as GrpcModule;
